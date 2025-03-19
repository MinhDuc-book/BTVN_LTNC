#include <iostream>
using namespace std;

int main(int argc, const char *argv) {
    int *pX = NULL;
    cout << "Address which pX to: " << pX << endl;
    cout << "Value of address which pX to: " << *pX << endl;
    *pX = 0;
    return 0;
}