#include <iostream>
using namespace std;

int main() {
    int age = 20;
    int marks = 75;

    cout << "age >= 18: " << (age >= 18) << endl;
    cout << "marks >= 40: " << (marks >= 40) << endl;
    cout << "age >= 18 && marks >= 40: " << (age >= 18 && marks >= 40) << endl;
    cout << "age < 18 || marks < 40: " << (age < 18 || marks < 40) << endl;
    cout << "!(age >= 18): " << !(age >= 18) << endl;

    return 0;
}
