#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr;

    if (ptr == nullptr) {
        cout << "Pointer is not pointing to any value." << endl;
    }

    int number = 10;
    ptr = &number;

    if (ptr != nullptr) {
        cout << "Value through pointer: " << *ptr << endl;
    }

    return 0;
}
