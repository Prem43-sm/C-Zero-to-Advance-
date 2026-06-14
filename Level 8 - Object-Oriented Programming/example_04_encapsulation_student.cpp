#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void setName(string studentName) {
        name = studentName;
    }

    void setAge(int studentAge) {
        if (studentAge > 0) {
            age = studentAge;
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student;
    student.setName("Neha");
    student.setAge(19);
    student.display();

    return 0;
}
