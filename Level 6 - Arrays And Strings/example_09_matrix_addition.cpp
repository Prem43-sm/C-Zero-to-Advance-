#include <iostream>
using namespace std;

int main() {
    int first[2][2] = {
        {1, 2},
        {3, 4}
    };

    int second[2][2] = {
        {5, 6},
        {7, 8}
    };

    int sum[2][2];

    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            sum[row][col] = first[row][col] + second[row][col];
        }
    }

    cout << "Matrix sum:" << endl;
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 2; col++) {
            cout << sum[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
