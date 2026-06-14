#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age. Age cannot be negative." << endl;
    } else if (age > 120) {
        cout << "Invalid age. Please enter a realistic age." << endl;
    } else {
        cout << "Valid age entered: " << age << endl;
    }

    return 0;
}
