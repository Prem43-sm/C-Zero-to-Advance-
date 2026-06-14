#include <iostream>
using namespace std;

int main() {
    int numbers[4] = {10, 20, 30, 40};
    int* ptr = numbers;

    cout << "First value: " << *ptr << endl;
    cout << "Second value: " << *(ptr + 1) << endl;
    cout << "Third value: " << *(ptr + 2) << endl;
    cout << "Fourth value: " << *(ptr + 3) << endl;

    return 0;
}
