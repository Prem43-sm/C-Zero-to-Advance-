#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {12, 45, 7, 45, 30};
    int largest = numbers[0];
    int secondLargest = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Second largest: " << secondLargest << endl;

    return 0;
}
