#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    double firstNumber;
    double secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "Add: " << add(firstNumber, secondNumber) << endl;
    cout << "Subtract: " << subtract(firstNumber, secondNumber) << endl;
    cout << "Multiply: " << multiply(firstNumber, secondNumber) << endl;

    if (secondNumber == 0) {
        cout << "Divide: Cannot divide by zero." << endl;
    } else {
        cout << "Divide: " << divide(firstNumber, secondNumber) << endl;
    }

    return 0;
}
