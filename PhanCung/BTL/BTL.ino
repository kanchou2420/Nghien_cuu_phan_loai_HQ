#include <Servo.h>

#define FM52_1 7   
#define RELAY 8     
#define SERVO_PIN 9 

Servo myServo;


enum ProcessState {
  IDLE,                
  WAITING_FOR_RESPONSE, 
  ACTION_FRESH,        
  ACTION_BAD_RELAY,    
  ACTION_BAD_SERVO    
};

ProcessState state = IDLE;


unsigned long stateStartTime = 0;

unsigned long lastCheckTime = 0;

bool prevSensorState = HIGH;


const unsigned long PYTHON_TIMEOUT        = 5000; 
const unsigned long CHECK_INTERVAL        = 5000;
const unsigned long FRESH_ACTION_DURATION = 4000; 
const unsigned long BAD_RELAY_DURATION    = 2400; 
const unsigned long BAD_SERVO_DURATION    = 2000; 

// Các biến đếm
int totalFruits = 0;
int freshCount  = 0;
int badCount    = 0;

void printCounters() {
  Serial.print("Tổng cam: ");
  Serial.print(totalFruits);
  Serial.print(" | Cam tươi: ");
  Serial.print(freshCount);
  Serial.print(" | Cam hỏng: ");
  Serial.println(badCount);
}

void setup() {
  Serial.begin(115200);
  pinMode(FM52_1, INPUT);
  pinMode(RELAY, OUTPUT);
  myServo.attach(SERVO_PIN);
  digitalWrite(RELAY, LOW);
  myServo.write(0);
}

void loop() {
  unsigned long currentTime = millis();
  bool sensorState = digitalRead(FM52_1);

  // Trong trạng thái IDLE, kiểm tra xem cảm biến có chuyển từ HIGH -> LOW
  // hoặc đã đủ thời gian CHECK_INTERVAL kể từ lần gửi CHECK cuối cùng
  if (state == IDLE) {
    if (sensorState == LOW && (prevSensorState == HIGH || (currentTime - lastCheckTime >= CHECK_INTERVAL))) {
      Serial.println("CHECK");
      lastCheckTime = currentTime;
      state = WAITING_FOR_RESPONSE;
      stateStartTime = currentTime;
    }
  }

  // Xử lý state machine
  switch(state) {
    case WAITING_FOR_RESPONSE:
      // Nếu có dữ liệu từ Python qua Serial
      if (Serial.available() > 0) {
        String result = Serial.readStringUntil('\n');
        result.trim();
        Serial.print("Result: ");
        Serial.println(result);
        if (result == "cam lanh") {
          freshCount++;
          totalFruits++;
          digitalWrite(RELAY, HIGH); // Kích hoạt relay cho cam tươi
          state = ACTION_FRESH;
          stateStartTime = millis();
        } else if (result == "cam hong") {
          badCount++;
          totalFruits++;
          digitalWrite(RELAY, HIGH); // Kích hoạt relay cho cam hỏng
          state = ACTION_BAD_RELAY;
          stateStartTime = millis();
        } else {
          Serial.println("No relevant object detected; skipping processing.");
          state = IDLE;
        }
      } else if (currentTime - stateStartTime >= PYTHON_TIMEOUT) {
        Serial.println("Timeout: No response from Python");
        state = IDLE;
      }
      break;

    case ACTION_FRESH:
      // Sau FRESH_ACTION_DURATION ms, tắt relay và kết thúc xử lý cam tươi
      if (currentTime - stateStartTime >= FRESH_ACTION_DURATION) {
        digitalWrite(RELAY, LOW);
        printCounters();
        state = IDLE;
      }
      break;

    case ACTION_BAD_RELAY:
      // Sau BAD_RELAY_DURATION ms, tắt relay, chuyển sang xử lý servo
      if (currentTime - stateStartTime >= BAD_RELAY_DURATION) {
        digitalWrite(RELAY, LOW);
        myServo.write(90); // Kích hoạt servo
        state = ACTION_BAD_SERVO;
        stateStartTime = millis();
      }
      break;

    case ACTION_BAD_SERVO:
      // Sau BAD_SERVO_DURATION ms, reset servo và kết thúc xử lý cam hỏng
      if (currentTime - stateStartTime >= BAD_SERVO_DURATION) {
        myServo.write(0);
        printCounters();
        state = IDLE;
      }
      break;

    case IDLE:
    default:
      // Ở trạng thái IDLE, không cần xử lý gì thêm.
      break;
  }

  prevSensorState = sensorState;
}