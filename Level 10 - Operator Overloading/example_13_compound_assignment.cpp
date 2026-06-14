#include <iostream>

class Vector2D {
    double x;
    double y;

public:
    Vector2D(double xValue, double yValue) : x(xValue), y(yValue) {}

    Vector2D& operator+=(const Vector2D& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    friend Vector2D operator+(Vector2D left, const Vector2D& right) {
        left += right;
        return left;
    }

    void display() const {
        std::cout << '(' << x << ", " << y << ")\n";
    }
};

int main() {
    Vector2D first(1.5, 2.0);
    Vector2D second(3.0, 4.5);

    first += second;
    first.display();

    Vector2D third = first + second;
    third.display();
    return 0;
}
