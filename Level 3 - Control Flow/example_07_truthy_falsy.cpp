#include <iostream>
using namespace std;

int main() {
    int value;

    cout << "Enter an integer: ";
    cin >> value;

    if (value) {
        cout << "This value is treated as true." << endl;
    } else {
        cout << "Zero is treated as false." << endl;
    }

    return 0;
}
