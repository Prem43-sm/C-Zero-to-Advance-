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

    void study() const {
        std::cout << name << " is studying.\n";
    }
};

class Employee : virtual public Person {
public:
    Employee(const std::string& name) : Person(name) {}

    void work() const {
        std::cout << name << " is working.\n";
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(const std::string& name)
        : Person(name), Student(name), Employee(name) {}
};

int main() {
    TeachingAssistant assistant("Aarav");
    assistant.study();
    assistant.work();
    return 0;
}
