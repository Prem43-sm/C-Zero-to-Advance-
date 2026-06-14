#include <iostream>
using namespace std;

int main() {
    int* value = new int;
    *value = 25;

    cout << "Before delete: " << *value << endl;

    delete value;
    value = nullptr;

    if (value == nullptr) {
        cout << "Pointer is safe after delete because it is nullptr." << endl;
    }

    return 0;
}
