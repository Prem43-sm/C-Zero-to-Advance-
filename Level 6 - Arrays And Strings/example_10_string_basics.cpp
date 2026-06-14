#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Prem";

    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    cout << "First character: " << name[0] << endl;

    name.append(" Kumar");

    cout << "After append: " << name << endl;

    return 0;
}
