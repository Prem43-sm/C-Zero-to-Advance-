#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {5, 2, 9, 1, 3};

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
