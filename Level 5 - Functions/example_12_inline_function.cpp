#include <iostream>
using namespace std;

inline int cube(int number) {
    return number * number * number;
}

int main() {
    cout << "Cube of 3: " << cube(3) << endl;
    cout << "Cube of 5: " << cube(5) << endl;

    return 0;
}
