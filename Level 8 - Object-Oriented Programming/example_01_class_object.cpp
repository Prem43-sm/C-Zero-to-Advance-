#include <iostream>
using namespace std;

class Student {
public:
    string name;
};

int main() {
    Student student1;
    student1.name = "Prem";

    cout << "Student name: " << student1.name << endl;

    return 0;
}
