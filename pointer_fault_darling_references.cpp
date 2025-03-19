#include <iostream>
using namespace std;

int *weird_sum(int a, int b) {
    int sum;
    sum = a + b;
    return &sum; // tra ve dia chi cua sum
}

int main(int argc, const char *argv[]) {
    cout << "Address of variable which is sum of 2 and 3: " << weird_sum(2,3);
    return 0; 
}