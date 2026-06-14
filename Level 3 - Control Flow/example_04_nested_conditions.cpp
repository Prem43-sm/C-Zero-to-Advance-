#include <iostream>
using namespace std;

int main() {
    int age;
    char hasId;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have ID? Enter y or n: ";
    cin >> hasId;

    if (age >= 18) {
        if (hasId == 'y') {
            cout << "Entry allowed." << endl;
        } else {
            cout << "Entry denied. ID required." << endl;
        }
    } else {
        cout << "Entry denied. Age must be 18 or above." << endl;
    }

    return 0;
}
