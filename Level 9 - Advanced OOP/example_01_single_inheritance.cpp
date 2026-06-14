#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& animalName) : name(animalName) {}

    void eat() const {
        std::cout << name << " is eating.\n";
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& dogName) : Animal(dogName) {}

    void bark() const {
        std::cout << name << " says: Woof!\n";
    }
};

int main() {
    Dog dog("Bruno");
    dog.eat();
    dog.bark();
    return 0;
}
