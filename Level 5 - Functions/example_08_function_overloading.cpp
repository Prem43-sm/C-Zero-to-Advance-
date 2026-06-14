#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Two int sum: " << add(2, 3) << endl;
    cout << "Two double sum: " << add(2.5, 3.5) << endl;
    cout << "Three int sum: " << add(2, 3, 4) << endl;

    return 0;
}
