#include <iostream>
using namespace std;

int main() {
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 4; col++) {
            cout << "(" << row << "," << col << ") ";
        }
        cout << endl;
    }

    return 0;
}
