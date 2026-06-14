#include <iostream>
using namespace std;

int main() {
    int marks[5] = {80, 75, 90, 65, 88};

    cout << "First mark: " << marks[0] << endl;
    cout << "Third mark before update: " << marks[2] << endl;

    marks[2] = 95;

    cout << "Third mark after update: " << marks[2] << endl;

    cout << "All marks: ";
    for (int i = 0; i < 5; i++) {
        cout << marks[i] << " ";
    }

    cout << endl;

    return 0;
}
