#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int row = 1; row <= rows; row++) {
        for (int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
