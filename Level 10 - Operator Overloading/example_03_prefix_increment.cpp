#include <iostream>

class Counter {
    int value;

public:
    Counter(int initialValue) : value(initialValue) {}

    Counter& operator++() {
        ++value;
        return *this;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter counter(5);
    Counter& result = ++counter;

    std::cout << "Returned value: " << result.getValue() << '\n';
    std::cout << "Current value: " << counter.getValue() << '\n';
    return 0;
}
