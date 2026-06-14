#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter marks from 0 to 100: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks." << endl;
    } else if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 75) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
