#include <iostream>
using namespace std;

// truyền vào hàm dạng pointer
int count_even(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

// Hàm nhận tham số kiểu mảng
void f_with_array(int arr[], int n) {
    cout << "Kích thước của mảng trong hàm (arr[]): " << sizeof(arr) << " bytes" << endl;
}

// Hàm nhận tham số kiểu mảng với kích thước xác định
void f_with_fixed_array(int arr[10]) {
    cout << "Kích thước của mảng trong hàm (arr[10]): " << sizeof(arr) << " bytes" << endl;
}

int main() {
    int A[10] = {0};
    
    cout << "Kích thước của mảng ngoài hàm (A): " << sizeof(A) << " bytes" << endl;

    f_with_array(A, 10); // Truyền mảng không xác định kích thước
    f_with_fixed_array(A); // Truyền mảng có kích thước xác định
    
    return 0;
}
