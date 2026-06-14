#include <iostream>
using namespace std;

int main() {
    int score = 75;
    int* scorePointer = &score;

    cout << "Before change: " << score << endl;

    *scorePointer = 95;

    cout << "After change through pointer: " << score << endl;

    return 0;
}
