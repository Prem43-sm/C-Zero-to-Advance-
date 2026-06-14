#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    string result = (age >= 18) ? "Adult" : "Minor";

    cout << "Result: " << result << endl;

    return 0;
}
