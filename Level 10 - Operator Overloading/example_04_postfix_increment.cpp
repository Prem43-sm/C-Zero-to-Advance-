#include <iostream>

class Counter {
    int value;

public:
    Counter(int initialValue) : value(initialValue) {}

    Counter operator++(int) {
        Counter oldValue(*this);
        ++value;
        return oldValue;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter counter(5);
    Counter oldValue = counter++;

    std::cout << "Returned value: " << oldValue.getValue() << '\n';
    std::cout << "Current value: " << counter.getValue() << '\n';
    return 0;
}
