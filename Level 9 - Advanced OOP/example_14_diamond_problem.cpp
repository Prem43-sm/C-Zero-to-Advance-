#include <iostream>
#include <string>

class Person {
protected:
    std::string name;

public:
    Person(const std::string& personName) : name(personName) {}
};

class Student : virtual public Person {
public:
    Student(const std::string& name) : Person(name) {}
};

class Employee : virtual public Person {
public:
    Employee(const std::string& name) : Person(name) {}
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(const std::string& name)
        : Person(name), Student(name), Employee(name) {}

    void introduce() const {
        std::cout << "Teaching assistant: " << name << '\n';
    }
};

int main() {
    TeachingAssistant assistant("Meera");
    assistant.introduce();
    return 0;
}
