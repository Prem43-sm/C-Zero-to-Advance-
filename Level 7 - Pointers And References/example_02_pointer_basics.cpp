#include <iostream>
using namespace std;

int main() {
    int number = 50;
    int* pointerToNumber = &number;

    cout << "Number value: " << number << endl;
    cout << "Number address: " << &number << endl;
    cout << "Pointer stores address: " << pointerToNumber << endl;
    cout << "Value through pointer: " << *pointerToNumber << endl;

    return 0;
}
