#include <iostream>

class LivingThing {
public:
    void breathe() const {
        std::cout << "Breathing.\n";
    }
};

class Animal : public LivingThing {
public:
    void move() const {
        std::cout << "Moving.\n";
    }
};

class Bird : public Animal {
public:
    void fly() const {
        std::cout << "Flying.\n";
    }
};

int main() {
    Bird bird;
    bird.breathe();
    bird.move();
    bird.fly();
    return 0;
}
