#include <iostream>
using namespace std;

int main() {
    double firstNumber;
    double secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "Sum: " << firstNumber + secondNumber << endl;
    cout << "Difference: " << firstNumber - secondNumber << endl;
    cout << "Product: " << firstNumber * secondNumber << endl;
    cout << "Division: " << firstNumber / secondNumber << endl;

    return 0;
}
