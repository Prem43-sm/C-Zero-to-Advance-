#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {45, 12, 89, 3, 27};
    int minimum = numbers[0];
    int maximum = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }

        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
    }

    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;

    return 0;
}
