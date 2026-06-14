#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Full name: " << fullName << endl;
    cout << "Length: " << fullName.length() << endl;

    return 0;
}
