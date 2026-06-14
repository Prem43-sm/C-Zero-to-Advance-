#include <iostream>
using namespace std;

int main() {
    int first = 10;
    int second = 20;

    int* ptr = &first;
    int& ref = first;

    cout << "Pointer points to first: " << *ptr << endl;
    cout << "Reference refers to first: " << ref << endl;

    ptr = &second;
    cout << "Pointer now points to second: " << *ptr << endl;

    ref = 99;
    cout << "First after changing reference: " << first << endl;

    return 0;
}
