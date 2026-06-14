#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base constructor\n";
    }

    ~Base() {
        std::cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor\n";
    }

    ~Derived() {
        std::cout << "Derived destructor\n";
    }
};

int main() {
    std::cout << "Creating object:\n";
    Derived object;
    std::cout << "Leaving main:\n";
    return 0;
}
