#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "Menu" << endl;
        cout << "1. Say Hello" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Hello!" << endl;
        }
    } while (choice != 0);

    cout << "Program ended." << endl;

    return 0;
}
