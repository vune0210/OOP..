# Laptrinhnangcao
...
1. hướng dẫn cài đặt:
 . Bước 1: cài đặt SDL2 vào Visual studio code theo như [hướng dẫn]()
 . Bước 2: Tải project game 
 . Bước 3: Chơi game
2. Mô tả chung:
 Game có cách chơi đơn giản. Sử dụng các phím mũi tên để di chuyển và ghép các con số lại với nhau để được 1 số to hơn.

3. Các chức năng:
 . Video minh họa: [2048]()
 . Chọn chế độ chơi: 3x3; 4x4; 5x5.
 . 
4. Các kĩ thuật sử dụng:
 - Thư viện đồ họa sdl2:
    - Sử dụng kĩ thuật load ảnh, chữ , phát âm thanh, nhạc nền 
    - Sử lí sự kiện chuột, bàn phím
    - Kĩ thuật bitmap font nhằm tối ưu bộ nhớ và tốc độ sử lý
 - Kĩ thuật lập trình
    - Sử dụng thư viện chuẩn vector để xử lý mảng hai chiều
    - Kĩ thuật chia file, code thành các file class riêng
    - Thuật toán xoay 1 ma trận 
    - Chia tách task thành UI và backend riêng
    - Viết wrapper class nhằm tiện lợi sử dụng thư viện SDL 2
    - Các kĩ thuật OOP
 - Fps:
    - Kĩ sử dụng PRESENTVSYNC để đồng bộ fps với tần số quét màn hình (60Hz)
 - Random: tạo ra các ô ngẫu nhiên nhờ kĩ thuật sinh số giả ngẫu nhiên
 - Photoshop: Tìm màu, phối màu

5. Kết luận
