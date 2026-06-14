#include <iostream>
using namespace std;

int main() {
    int marks[5] = {80, 70, 90, 60, 85};
    int* ptr = marks;

    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    cout << endl;

    return 0;
}
