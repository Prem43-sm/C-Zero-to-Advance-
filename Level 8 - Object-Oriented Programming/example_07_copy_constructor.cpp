#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    Student(string studentName) {
        name = studentName;
    }

    Student(const Student& other) {
        name = other.name;
    }

    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student first("Amit");
    Student second = first;

    first.display();
    second.display();

    return 0;
}
