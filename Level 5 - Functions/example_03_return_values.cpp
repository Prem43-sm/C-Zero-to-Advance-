#include <iostream>
using namespace std;

int square(int number) {
    return number * number;
}

int main() {
    int value;

    cout << "Enter a number: ";
    cin >> value;

    cout << "Square: " << square(value) << endl;

    return 0;
}
