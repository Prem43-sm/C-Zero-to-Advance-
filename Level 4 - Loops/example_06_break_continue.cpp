#include <iostream>
using namespace std;

int main() {
    cout << "continue example: ";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << i << " ";
    }

    cout << endl;

    cout << "break example: ";
    for (int i = 1; i <= 5; i++) {
        if (i == 4) {
            break;
        }
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
