# BTVN_LTNC

## Bài 1: 
  - Địa chỉ mà con trỏ pX trỏ tới vẫn giữ nguyên nhưng giá trị ở trong ô nhớ địa chỉ đó thay đổi
  ![Pointer Fault](https://github.com/MinhDuc-book/BTVN_LTNC/blob/Part_A/image/pointer_fault.jpg)

  - Khi truy cập vào con trỏ NULL, giá trị của pX là 0(đang không trỏ đến ô nhớ nào) nhưng giá trị mà ô nhớ chứa thì không có
  ![Pointer Fault NULL](https://github.com/MinhDuc-book/BTVN_LTNC/blob/Part_A/image/pointer_fault_NULL_2.jpg)

  - Trả về con trỏ nhưng vòng đời của con trỏ lớn hơn so với vòng đời của biến trỏ tới. Bời vì khi kết thúc vòng đời của biến dược trỏ tới, trong stack sẽ xóa đi biến đó
  - VD: Con trỏ trả về 1 biến địa phương. Trong ảnh thì weird_sum có vòng đời toàn chương trình nhưng biến c chỉ có vòng đời nằm trong hàm weird_sum
  ![Dangling References](https://github.com/MinhDuc-book/BTVN_LTNC/blob/Part_A/image/darling_references_2.jpg)

## Bài 2:
  - Kích thước của mảng ngoài hàm: 40 bytes
  - Kích thước của mảng trong hàm: 8 bytes
  - Lý do: khi truyền tham số và hàm, mảng được truyền dưới dạng con trỏ mà con trỏ trong hệ thống 64bit có kích thước 8 bytes(đối với hệ thống 32bit thì kích thước con trỏ sẽ là 4 bytes). Còn đối với mảng bên ngoài hàm thì kích thước được tính như bình thường. Nên sizeoff(arr) trong hàm thì chỉ trả về kích thước của 1 con trỏ còn sizeof(arr) ngoài hàm trả về kích thước của mảng
  ![Pass by pointer](https://github.com/MinhDuc-book/BTVN_LTNC/blob/Part_A/image/pass_by_pointer.jpg)

## Bài 3:
  - Truyền tham số bằng con trỏ và trả về số lượng số chẵn
  ![Access to array](https://github.com/MinhDuc-book/BTVN_LTNC/blob/Part_A/image/access_to_array.jpg)

## Bài 4:
  - Tìm kiến nhị phân bằng vòng lặp, sử dụng con trỏ để truy cập vào mảng
  ![Binary search](https://github.com/MinhDuc-book/BTVN_LTNC/blob/Part_A/image/binary_search_use_loop.png)
