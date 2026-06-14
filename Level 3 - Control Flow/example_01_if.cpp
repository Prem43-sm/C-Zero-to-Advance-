#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    }

    cout << "Program ended." << endl;

    return 0;
}
