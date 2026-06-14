#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string city;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your city: ";
    cin >> city;

    cout << "\nIntroduction" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "I am learning C++ basics." << endl;

    return 0;
}
