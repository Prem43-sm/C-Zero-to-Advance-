#include <iostream>
using namespace std;

int main() {
    int size;
    int sum = 0;

    cout << "Enter array size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size." << endl;
        return 0;
    }

    int* numbers = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum: " << sum << endl;

    delete[] numbers;
    numbers = nullptr;

    return 0;
}
