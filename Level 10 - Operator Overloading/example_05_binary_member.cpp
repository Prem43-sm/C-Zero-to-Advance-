#include <iostream>

class Distance {
    int meters;
    int centimeters;

    void normalize() {
        meters += centimeters / 100;
        centimeters %= 100;
    }

public:
    Distance(int meterValue, int centimeterValue)
        : meters(meterValue), centimeters(centimeterValue) {
        normalize();
    }

    Distance operator+(const Distance& other) const {
        return Distance(meters + other.meters,
                        centimeters + other.centimeters);
    }

    void display() const {
        std::cout << meters << " m " << centimeters << " cm\n";
    }
};

int main() {
    Distance first(2, 75);
    Distance second(1, 50);
    Distance total = first + second;

    total.display();
    return 0;
}
