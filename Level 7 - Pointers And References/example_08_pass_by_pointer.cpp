#include <iostream>
using namespace std;

void changeValue(int* number) {
    if (number != nullptr) {
        *number = 100;
    }
}

int main() {
    int value = 10;

    changeValue(&value);

    cout << "Value after pass by pointer: " << value << endl;

    return 0;
}
