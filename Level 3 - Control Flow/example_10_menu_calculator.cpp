#include <iostream>
using namespace std;

int main() {
    int choice;
    double firstNumber;
    double secondNumber;

    cout << "Menu Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    switch (choice) {
        case 1:
            cout << "Result: " << firstNumber + secondNumber << endl;
            break;
        case 2:
            cout << "Result: " << firstNumber - secondNumber << endl;
            break;
        case 3:
            cout << "Result: " << firstNumber * secondNumber << endl;
            break;
        case 4:
            if (secondNumber == 0) {
                cout << "Cannot divide by zero." << endl;
            } else {
                cout << "Result: " << firstNumber / secondNumber << endl;
            }
            break;
        default:
            cout << "Invalid menu choice." << endl;
    }

    return 0;
}
