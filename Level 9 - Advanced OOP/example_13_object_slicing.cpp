#include <iostream>

class Animal {
public:
    virtual ~Animal() {}

    virtual void speak() const {
        std::cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Woof!\n";
    }
};

void speakByValue(Animal animal) {
    animal.speak();
}

void speakByReference(const Animal& animal) {
    animal.speak();
}

int main() {
    Dog dog;

    std::cout << "Passed by value: ";
    speakByValue(dog);

    std::cout << "Passed by reference: ";
    speakByReference(dog);
    return 0;
}
