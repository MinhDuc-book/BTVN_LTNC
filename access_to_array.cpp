#include <iostream>
using namespace std;

int count_even(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main(int argc, int *argv[]) {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << "With 5 first of array, amount of even: " << count_even(array,4) << endl;
    
    // dao nguoc mang
    for (int i = 0; i < 10/2; i++) {
        int temp = array[i];
            array[i] = array[9-i];
            array[9-i] = array[i];
    }

    cout << "With 5 last of array, amount of even: " << count_even(array,4);
    return 0;
    
} 
