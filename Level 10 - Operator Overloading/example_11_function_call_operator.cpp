#include <iostream>

class Multiplier {
    int factor;

public:
    Multiplier(int multiplier) : factor(multiplier) {}

    int operator()(int value) const {
        return factor * value;
    }
};

int main() {
    Multiplier triple(3);

    std::cout << "3 x 7 = " << triple(7) << '\n';
    std::cout << "3 x 12 = " << triple(12) << '\n';
    return 0;
}
