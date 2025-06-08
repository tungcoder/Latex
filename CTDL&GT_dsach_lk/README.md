# **Mẫu file biên soạn đề thi và lời giải/hướng dẫn chấm của Câu lạc bộ Học thuật Khoa Công nghệ UMT**

*Trong template có sử dụng gói `dethi.sty` của tác giả Nguyễn Hữu Điển (ĐHKHTN, Hà Nội).*

> Cập nhật lần cuối: 19/02/2025.

## **A. Thư mục chính**
1. File `./dethy.sty`: File thư viện, vui lòng không thay đổi bất cứ thông tin gì trong file này.
2. File `./Format.tex`: File chứa các phần khai báo của tài liệu, vui lòng không xóa bất cứ dòng nào trong file này. Chỉ thêm thư viện mới khi cần thiết và ghi chú chi tiết, phải chú ý tránh xung đột.
3. File `./Main.tex`: File chính của tài liệu. Tuy nhiên, đã được chia nhỏ thành các file con nên vui lòng không thay đổi bất cứ thông tin gì trong file này.
4. File `./Requirements.tex`: File chứa những yêu cầu về định dạng, công thức trong tài liệu, vui lòng đọc kỹ và tuân theo các chỉ dẫn trong file.
5. File `./Statements.tex`: File chứa các câu hỏi của đề thi, vui lòng tuân theo các hướng dẫn trong file.
6. File `./Solutions.tex`: File chứa lời giải của đề thi, vui lòng tuân theo các hướng dẫn trong file.
7. File `./UsefulLatex.tex`: File chứa một số mã Latex tham khảo (sơ đồ Karnaugh, bảng biến thiên,...).

## **B. Thư mục ./MainPages/**
1. File `SkipPage.tex:` File để bỏ qua trang, tạo trang trắng với nội dung "THIS PAGE INTENTIONALLY LEFT BLANK". Vui lòng không thay đổi bất cứ thông tin gì trong file này.
2. File `StatementPage.tex:` File cấu trúc phần đề thi, vui lòng chỉ thay đổi thông tin, không thay đổi cấu trúc.
3. File `SolutionPage.tex`: File cấu trúc phần lời giải, vui lòng không thay đổi thông tin trong file này.
4. File `TitlePage.tex`: File trang bìa, vui lòng chỉ thay đổi thông tin, không thay đổi cấu trúc.

## **C. Thư mục ./Resources/**
1. Thư mục `./Resources/Files`: Chứa các file cần import vào tài liệu (chẳng hạn file code, file PDF,...).
2. Thư mục `./Resources/Images`: Chứa các hình ảnh dùng trong tài liệu.
3. Thư mục `./Resources/Logos`: Chứa logo của UMT, Khoa Công nghệ, và STAC@UMT. Vui lòng không thay đổi các file trong thư mục này.