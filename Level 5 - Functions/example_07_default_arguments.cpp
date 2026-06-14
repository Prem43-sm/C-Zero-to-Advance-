#include <iostream>
#include <string>
using namespace std;

void greet(string name = "Student") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet();
    greet("Prem");

    return 0;
}
