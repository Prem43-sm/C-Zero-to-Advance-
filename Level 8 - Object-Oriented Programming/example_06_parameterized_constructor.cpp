#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student("Prem", 20);
    student.display();

    return 0;
}
