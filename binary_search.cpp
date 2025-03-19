#include <iostream>
using namespace std;

int main() {
    //           0,1,2,3,4,5,6,7,8,9
    int A[10] = {1,2,3,4,5,6,7,8,9,10};
    int key = 8;
    int right = 10 - 1; 
    int left = 0;
    while (left <= right) {
        int mid = (right + left) / 2;
        if (A[mid] == key) {
            cout << "Value finding is at:" << mid << endl;
            break;
        } else if (A[mid] < key) {
            left = mid + 1;
        } else if (A[mid] > key) {
            right = right - 1;
        }
    }
}