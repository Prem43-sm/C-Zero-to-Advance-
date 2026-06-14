#include <iostream>
using namespace std;

class Student {
public:
    string name;

    Student() {
        name = "Unknown";
    }
};

int main() {
    Student student;
    cout << "Name: " << student.name << endl;

    return 0;
}
