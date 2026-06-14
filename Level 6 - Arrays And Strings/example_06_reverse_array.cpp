#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    cout << "Reverse order: ";
    for (int i = 4; i >= 0; i--) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
