#include <iostream>
using namespace std;

int main() {
    int first;
    int second;
    int third;

    cout << "Enter first number: ";
    cin >> first;

    cout << "Enter second number: ";
    cin >> second;

    cout << "Enter third number: ";
    cin >> third;

    if (first >= second && first >= third) {
        cout << "Largest number: " << first << endl;
    } else if (second >= first && second >= third) {
        cout << "Largest number: " << second << endl;
    } else {
        cout << "Largest number: " << third << endl;
    }

    return 0;
}
