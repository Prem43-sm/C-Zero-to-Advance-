#include <iostream>
using namespace std;

int main() {
    int* number = new int;

    *number = 500;

    cout << "Dynamic value: " << *number << endl;

    delete number;
    number = nullptr;

    if (number == nullptr) {
        cout << "Memory deleted and pointer set to nullptr." << endl;
    }

    return 0;
}
