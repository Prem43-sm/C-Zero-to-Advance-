#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student("Kiran", 21);
    student.display();

    return 0;
}
