#include <iostream>
using namespace std;

void changeValue(int number) {
    number = 100;
}

int main() {
    int value = 10;

    changeValue(value);

    cout << "Value after pass by value: " << value << endl;

    return 0;
}
