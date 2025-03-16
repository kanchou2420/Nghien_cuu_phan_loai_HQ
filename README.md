<!-- REDMI.md - File hướng dẫn và thông tin dự án -->

<!-- Header: Logo -->
<div style="display: flex; justify-content: center; align-items: center; margin-bottom: 20px;">
  <img src="logoDaiNam.png" alt="DaiNam University Logo" style="width: 250px; margin: 0 10px;">
  <img src="LogoAIoTLab.png" alt="AIoT Lab Logo" style="width: 250px; margin: 0 10px;">
</div>

<!-- Navigation Buttons -->
<div style="text-align: center; margin-bottom: 20px;">
  <a href="https://www.facebook.com/DNUAIoTLab" style="display: inline-block; padding: 10px 20px; background-color: #28a745; color: #fff; border-radius: 5px; text-decoration: none; margin: 0 5px;">Made by AIoTLab</a>
  <a href="https://fitdnu.net/" style="display: inline-block; padding: 10px 20px; background-color: #dc3545; color: #fff; border-radius: 5px; text-decoration: none; margin: 0 5px;">Fit DNU</a>
  <a href="https://dainam.edu.vn/vi" style="display: inline-block; padding: 10px 20px; background-color: #ffc107; color: #333; border-radius: 5px; text-decoration: none; margin: 0 5px;">DaiNam University</a>
</div>

<hr>

<!-- Project Description -->
<h2 style="text-align: center;">✨ Mô tả dự án</h2>
<p style="max-width: 800px; margin: auto; text-align: justify;">
  Dự án này sử dụng <strong>YOLO</strong> để phân loại hoa quả (tươi/hỏng) từ hình ảnh được chụp từ <strong>ESP32-CAM</strong>. Hệ thống dùng <strong>Flask</strong> làm backend để xử lý ảnh và gửi dữ liệu về giao diện web, đồng thời kết nối với <strong>Arduino</strong> để điều khiển phần cứng.
</p>

<hr>

<!-- Project Structure -->
<h2 style="text-align: center;">🚀 Cấu trúc dự án</h2>
<pre style="background-color: #000; padding: 15px; border-radius: 5px; overflow-x: auto; max-width: 800px; margin: auto; color: #fff;">
📂 Nghien_cuu_phan_loai_HQ
├── 📸 anhcam/                   # Thư mục lưu trữ hình ảnh từ camera
├── 🔌 PhanCung/                  
│   ├── ⚙️ BTL.ino               # Arduino code cho phần cứng
│   └── 📡 CameraWebServer.ino   # Arduino code cho Camera Web Server
├── 💻 REDMI/                    # Thư mục chứa code liên quan đến REDMI
├── 🎨 static/                   # Tài nguyên tĩnh (CSS, JS, hình ảnh, …)
│   └── 📄 .gitkeep             # File giữ chỗ cho thư mục rỗng
├── 🌐 templates/                # Giao diện HTML cho Flask
│   └── 🖥️ index.html           # Giao diện trang web
├── 🤖 best.pt                   # File mô hình YOLO đã huấn luyện
├── 📦 requirements.txt          # Danh sách các thư viện Python cần cài đặt
└── 🐍 web.py                    # Flask server và xử lý ảnh
</pre>

<hr>

<!-- Hardware Section -->
<h2 style="text-align: center;">🛠️ Phần cứng</h2>
<div style="display: flex; justify-content: center; flex-wrap: wrap; max-width: 800px; margin: auto;">
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #007BFF; color: #fff; font-size: 14px;">ARDUINO UNO R3</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #007BFF; color: #fff; font-size: 14px;">ESP32-CAM</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #007BFF; color: #fff; font-size: 14px;">SERVO</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #007BFF; color: #fff; font-size: 14px;">WIFI</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #007BFF; color: #fff; font-size: 14px;">DÂY KẾT NỐI</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #007BFF; color: #fff; font-size: 14px;">BĂNG TRUYỀN</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #007BFF; color: #fff; font-size: 14px;">CẢM BIẾN FM52</button>
</div>

<!-- Software Section -->
<h2 style="text-align: center;">💻 Phần mềm</h2>
<div style="display: flex; justify-content: center; flex-wrap: wrap; max-width: 800px; margin: auto;">
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">🐍 Python</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">Flask (2.3.2)</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">Ultralytics YOLO (8.0.0)</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">OpenCV-Python (4.8.0.76)</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">NumPy (1.24.3)</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">PySerial (3.5)</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">Arduino IDE</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">Servo Library</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">best.pt</button>
  <button style="margin: 5px; padding: 10px 20px; border: none; border-radius: 5px; background-color: #28a745; color: #fff; font-size: 14px;">HTML/CSS</button>
</div>

<hr>

<!-- Python Libraries -->
<h2 style="text-align: center;">📦 Các thư viện Python cần thiết</h2>
<p style="max-width: 800px; margin: auto; text-align: justify;">
  <strong>Các gói cần cài đặt:</strong><br>
  - Flask==2.3.2<br>
  - ultralytics==8.0.0<br>
  - opencv-python==4.8.0.76<br>
  - numpy==1.24.3<br>
  - pyserial==3.5<br><br>
  <strong>Lệnh cài thư viện:</strong><br>
  - (Tùy chọn) Tạo môi trường ảo: <br>
  <code>python -m venv venv</code><br>
  <code>source venv/bin/activate   # Linux/MacOS</code><br>
  <code>venv\Scripts\activate      # Windows</code><br><br>
  - Cài đặt các gói: <br>
  <code>pip install -r requirements.txt</code><br>
  Hoặc cài đặt trực tiếp: <br>
  <code>pip install Flask==2.3.2 ultralytics==8.0.0 opencv-python==4.8.0.76 numpy==1.24.3 pyserial==3.5</code><br><br>
  - <strong>Chạy Flask server:</strong> <br>
  <code>python web.py</code>
</p>

<hr>

<!-- Circuit Diagram / Wiring -->
<h2 style="text-align: center;">🧮 Bảng mạch</h2>
<p style="max-width: 800px; margin: auto; text-align: center;">
  ⛓️‍💥 <strong>Hướng dẫn cắm dây:</strong>
</p>

<!-- Bảng: Cảm biến FM52 -->
<h4 style="text-align: center;">Cảm biến FM52</h4>
<table style="margin: auto; border-collapse: collapse;">
  <tr>
    <th style="padding: 8px; border: 1px solid #ccc;">Thiết bị</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Chân</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Giá trị</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Ghi chú</th>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;">Cảm biến FM52</td>
    <td style="padding: 8px; border: 1px solid #ccc;">VCC</td>
    <td style="padding: 8px; border: 1px solid #ccc;">5V</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Cấp nguồn cho cảm biến</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">GND</td>
    <td style="padding: 8px; border: 1px solid #ccc;">GND</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Nối đất</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">OUT</td>
    <td style="padding: 8px; border: 1px solid #ccc;">D7</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Xuất tín hiệu phát hiện vật thể</td>
  </tr>
</table>

<br>

<!-- Bảng: Relay (Điều khiển băng chuyền) -->
<h4 style="text-align: center;">Relay (Điều khiển băng chuyền)</h4>
<table style="margin: auto; border-collapse: collapse;">
  <tr>
    <th style="padding: 8px; border: 1px solid #ccc;">Thiết bị</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Chân</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Giá trị</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Ghi chú</th>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;">Relay (Điều khiển băng chuyền)</td>
    <td style="padding: 8px; border: 1px solid #ccc;">VCC</td>
    <td style="padding: 8px; border: 1px solid #ccc;">5V</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Cấp nguồn cho relay</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">GND</td>
    <td style="padding: 8px; border: 1px solid #ccc;">GND</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Nối đất</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">IN</td>
    <td style="padding: 8px; border: 1px solid #ccc;">D8</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Điều khiển relay đóng/ngắt băng chuyền</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">COM</td>
    <td style="padding: 8px; border: 1px solid #ccc;">1 cực của nguồn băng chuyền</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Dòng điện vào relay</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">NO</td>
    <td style="padding: 8px; border: 1px solid #ccc;">1 cực của động cơ băng chuyền</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Khi relay mở, băng chuyền chạy</td>
  </tr>
</table>

<br>

<!-- Bảng: Băng chuyền -->
<h4 style="text-align: center;">Băng chuyền</h4>
<table style="margin: auto; border-collapse: collapse;">
  <tr>
    <th style="padding: 8px; border: 1px solid #ccc;">Thiết bị</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Chân</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Giá trị</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Ghi chú</th>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;">Băng chuyền</td>
    <td style="padding: 8px; border: 1px solid #ccc;">+</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Nối với NO của relay</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Nhận điện khi relay mở</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">-</td>
    <td style="padding: 8px; border: 1px solid #ccc;">GND</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Hoàn thành mạch</td>
  </tr>
</table>

<br>

<!-- Bảng: Servo -->
<h4 style="text-align: center;">Servo</h4>
<table style="margin: auto; border-collapse: collapse;">
  <tr>
    <th style="padding: 8px; border: 1px solid #ccc;">Thiết bị</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Chân</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Giá trị</th>
    <th style="padding: 8px; border: 1px solid #ccc;">Ghi chú</th>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;">Servo</td>
    <td style="padding: 8px; border: 1px solid #ccc;">VCC</td>
    <td style="padding: 8px; border: 1px solid #ccc;">5V</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Cấp nguồn cho servo</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">GND</td>
    <td style="padding: 8px; border: 1px solid #ccc;">GND</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Nối đất</td>
  </tr>
  <tr>
    <td style="padding: 8px; border: 1px solid #ccc;"></td>
    <td style="padding: 8px; border: 1px solid #ccc;">Signal</td>
    <td style="padding: 8px; border: 1px solid #ccc;">D9</td>
    <td style="padding: 8px; border: 1px solid #ccc;">Nhận tín hiệu điều khiển từ Arduino</td>
  </tr>
</table>

<hr>

<!-- Setup and Run Instructions -->
<h2 style="text-align: center;">🚀 Hướng dẫn cài đặt và chạy</h2>
<p style="max-width: 800px; margin: auto; text-align: justify;">
  <strong>1. Chuẩn bị phần cứng:</strong><br>
  - Nạp mã Arduino:<br>
  &nbsp;&nbsp;&bull; Mở file <code>BTL.ino</code> bằng Arduino IDE.<br>
  &nbsp;&nbsp;&bull; Kết nối board Arduino với máy tính.<br>
  &nbsp;&nbsp;&bull; Nạp (upload) mã nguồn lên board.<br>
  &nbsp;&nbsp;&bull; Đảm bảo Arduino xuất hiện trên cổng COM.<br>
  - Nạp mã cho ESP32-CAM với file <code>CameraWebServer.ino</code>.<br><br>
  <strong>2. CÀI ĐẶT PHẦN MỀM:</strong><br>
  <strong>2.1 Cài đặt Arduino IDE:</strong><br>
  &nbsp;&nbsp;&bull; Tải Arduino IDE tại: <a href="https://www.arduino.cc/en/software" target="_blank">Arduino Software</a>.<br>
  &nbsp;&nbsp;&bull; Cài đặt Driver CH340 nếu dùng board Arduino clone.<br><br>
  <strong>2.2 Cài đặt thư viện cho Arduino:</strong><br>
  &nbsp;&nbsp;&bull; Mở Arduino IDE → Library Manager (Ctrl + Shift + I), tìm và cài: <code>Servo.h</code> (Điều khiển servo)
</p>

<hr>

<!-- System Operation -->
<h2 style="text-align: center;">Hoạt động của hệ thống</h2>
<div style="text-align: center;">
  <img src="REDMI/kientruc.jpg" alt="Kiến trúc hệ thống" style="max-width: 100%; height: auto; border: 1px solid #ccc; margin: auto;">
</div>
<p style="max-width: 800px; margin: auto; text-align: justify;">
  <strong>1️⃣ Khởi động hệ thống:</strong><br>
  - Bật nguồn cho Arduino, ESP32-CAM và máy tính.<br>
  - Mở Serial Monitor (115200 baud) trên Arduino IDE để theo dõi hoạt động.<br>
  - Chạy Flask Server trên PC bằng lệnh: <code>python web.py</code><br><br>
  <strong>Quy trình hoạt động:</strong><br>
  - Server nhận ảnh từ ESP32-CAM và phân loại bằng YOLO.<br>
  - Khi phát hiện quả, kết quả được gửi qua cổng Serial đến Arduino.<br>
  - ESP32-CAM chụp ảnh và gửi về máy tính.<br>
  - Python với YOLO phân loại ảnh và gửi kết quả về Arduino:<br>
  &nbsp;&nbsp;&rarr; <strong>"cam tươi"</strong> → Băng chuyền chạy tiếp (4 giây).<br>
  &nbsp;&nbsp;&rarr; <strong>"cam hỏng"</strong> → Băng chuyền chạy 1.9 giây, sau đó servo gạt quả hỏng (quay 90° trong 2 giây rồi quay lại).<br>
  &nbsp;&nbsp;&rarr; <strong>"unknown"</strong> → Không kích hoạt phần cứng, chỉ in thông báo.<br>
  - Arduino nhận kết quả và điều khiển động cơ, servo theo từng loại quả.
</p>

<hr>

<!-- Code Explanation -->
<h2 style="text-align: center;">Giải thích code</h2>
<p style="max-width: 800px; margin: auto; text-align: justify;">
  <strong>Arduino Code (arduino_code.ino):</strong><br>
  - <em>Khởi tạo:</em> Khởi tạo Serial ở tốc độ 115200, cấu hình chân cho cảm biến, relay và servo. Servo được gắn tại chân 9 và khởi tạo về góc 0°.<br>
  - <em>Vòng lặp chính:</em> Đọc trạng thái của cảm biến. Khi cảm biến thay đổi trạng thái hoặc sau khoảng thời gian định kỳ, gửi lệnh "CHECK" và chờ phản hồi từ Python.<br>
  - <em>Xử lý kết quả:</em><br>
  &nbsp;&nbsp;&rarr; Nếu nhận "cam tươi": Kích hoạt relay chạy trong 4 giây.<br>
  &nbsp;&nbsp;&rarr; Nếu nhận "cam hỏng": Kích hoạt relay chạy 1.9 giây, quay servo 90° trong 2 giây, sau đó quay lại 0°.<br>
  &nbsp;&nbsp;&rarr; Nếu không nhận phản hồi: In thông báo timeout.<br>
  &nbsp;&nbsp;&rarr; Nếu nhận vật thể không phải hoa quả cần nhận diện "unknown": Không kích hoạt phần cứng và in thông báo "No relevant object detected; skipping processing.".<br><br>
  <strong>Flask &amp; YOLO Code (web.py):</strong><br>
  - <em>Khởi tạo:</em> Flask server khởi chạy tại <code>http://0.0.0.0:5000/</code> và tải mô hình YOLO từ file <code>best.pt</code>.<br>
  - <em>Xử lý ảnh:</em> Lấy ảnh từ ESP32-CAM qua URL, chạy YOLO để nhận diện đối tượng (quả cam tươi/hỏng), cập nhật ảnh annotate và kết quả phân loại.<br>
  - <em>Giao tiếp với Arduino:</em> Khi nhận lệnh "CHECK" qua Serial, Flask sẽ chụp ảnh mới, xử lý và gửi kết quả ("cam tươi", "cam hỏng" hoặc "unknown") về Arduino.<br>
  - <em>Giao diện web:</em> Hiển thị video feed từ camera, thông tin FPS, trạng thái camera và cảnh báo.
</p>

<hr>

<!-- Kết quả hiển thị -->
<h2 style="text-align: center;">📸 Kết quả hiển thị</h2>
<div style="text-align: center;">
  <p><strong>Ảnh cam tươi trên web:</strong></p>
  <img src="REDMI/anhcamtuoi.jpg" alt="Ảnh cam tươi" style="max-width: 100%; height: auto; border: 1px solid #ccc; margin: auto 0 20px;">
  
  <p><strong>Ảnh cam hỏng được cảnh báo:</strong></p>
  <img src="REDMI/anhcamhong.jpg" alt="Ảnh cam hỏng" style="max-width: 100%; height: auto; border: 1px solid #ccc; margin: auto;">
</div>

<br>
<hr>

<h2 style="text-align: center;">🌟 Poster ✨</h2>
<p style="text-align: center;"><strong>Poster nhóm</strong></p>
<div style="text-align: center;">
  <img src="REDMI/poster.jpg" alt="Poster nhóm" style="max-width: 100%; height: auto; border: 1px solid #ccc; margin: auto;">
</div>

<br>
<hr>

<!-- Đóng góp -->
<h2 style="text-align: center;">🤝 Đóng góp</h2>
<p style="text-align: center;">Dự án được phát triển bởi 4 thành viên:</p>
<table style="margin: auto; border-collapse: collapse;">
  <thead>
    <tr>
      <th style="padding: 8px; border: 1px solid #ccc;">Họ và Tên</th>
      <th style="padding: 8px; border: 1px solid #ccc;">Vai trò</th>
      <th style="padding: 8px; border: 1px solid #ccc;">Profile</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="padding: 8px; border: 1px solid #ccc;">Đỗ Hải Anh</td>
      <td style="padding: 8px; border: 1px solid #ccc;">Phát triển toàn bộ mã nguồn, tìm kiếm dữ liệu, lắp đặt phần cứng, train model, kiểm thử, triển khai dự án và thực hiện video giới thiệu, ngân sách thiết bị.</td>
      <td style="padding: 8px; border: 1px solid #ccc;">
        <a href="https://www.facebook.com/profile.php?id=100090566726527&locale=vi_VN" style="display: inline-block; padding: 10px 20px; background-color: #6f42c1; color: #fff; border-radius: 5px; text-decoration: none;">Profile</a>
      </td>
    </tr>
    <tr>
      <td style="padding: 8px; border: 1px solid #ccc;">Nguyễn Thu Huyền</td>
      <td style="padding: 8px; border: 1px solid #ccc;">Biên soạn tài liệu overlef, hỗ trợ train model, thu thập dữ liệu, viết latext, làm poster, làm powpoint, thuyết trình, ngân sách thiết bị.</td>
      <td style="padding: 8px; border: 1px solid #ccc;">
        <a href="https://www.facebook.com/share/1Fh5LW8kQw/?mibextid=wwXIfr" style="display: inline-block; padding: 10px 20px; background-color: #6f42c1; color: #fff; border-radius: 5px; text-decoration: none;">Profile</a>
      </td>
    </tr>
    <tr>
      <td style="padding: 8px; border: 1px solid #ccc;">Nguyễn Phương Thảo</td>
      <td style="padding: 8px; border: 1px solid #ccc;">Biên soạn tài liệu overlef, hỗ trợ train model, thu thập dữ liệu, viết latext, làm poster, làm powpoint, thuyết trình, ngân sách thiết bị.</td>
      <td style="padding: 8px; border: 1px solid #ccc;">
        <a href="https://www.facebook.com/share/1EJTvJUZss/" style="display: inline-block; padding: 10px 20px; background-color: #6f42c1; color: #fff; border-radius: 5px; text-decoration: none;">Profile</a>
      </td>
    </tr>
    <tr>
      <td style="padding: 8px; border: 1px solid #ccc;">Bùi Hải Phong</td>
      <td style="padding: 8px; border: 1px solid #ccc;">Thu thập dữ liệu, gắn nhãn dữ liệu, hỗ trợ train model, lắp đặt phần cứng, kiểm thử, triển khai video giới thiệu, ngân sách thiết bị.</td>
      <td style="padding: 8px; border: 1px solid #ccc;">
        <a href="https://www.facebook.com/dz.phong.378" style="display: inline-block; padding: 10px 20px; background-color: #6f42c1; color: #fff; border-radius: 5px; text-decoration: none;">Profile</a>
      </td>
    </tr>
  </tbody>
</table>

<p style="text-align: center; margin-top: 20px;">© 2025 NHÓM 1, CNTT16-06, TRƯỜNG ĐẠI HỌC ĐẠI NAM</p>
