#include <iostream>
using namespace std;

int add(int a, int b);

int main() {
    cout << "Sum: " << add(10, 20) << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}
