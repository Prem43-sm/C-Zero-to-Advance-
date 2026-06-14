#include <iostream>

class Animal {
public:
    virtual ~Animal() {}

    virtual void speak() const {
        std::cout << "Animal makes a sound.\n";
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Cat says: Meow!\n";
    }
};

int main() {
    Cat cat;
    Animal& animal = cat;
    animal.speak();
    return 0;
}
