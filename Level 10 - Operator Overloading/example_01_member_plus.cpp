#include <iostream>

class Number {
    int value;

public:
    Number(int number) : value(number) {}

    Number operator+(const Number& other) const {
        return Number(value + other.value);
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number first(12);
    Number second(8);
    Number sum = first + second;

    std::cout << "Sum: " << sum.getValue() << '\n';
    return 0;
}
