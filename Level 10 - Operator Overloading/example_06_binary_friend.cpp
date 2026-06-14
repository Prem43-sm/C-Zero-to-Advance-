#include <iostream>

class Vector2D {
    double x;
    double y;

public:
    Vector2D(double xValue, double yValue) : x(xValue), y(yValue) {}

    friend Vector2D operator*(double scalar, const Vector2D& vector) {
        return Vector2D(scalar * vector.x, scalar * vector.y);
    }

    void display() const {
        std::cout << '(' << x << ", " << y << ")\n";
    }
};

int main() {
    Vector2D direction(2.0, 3.5);
    Vector2D scaled = 4.0 * direction;

    scaled.display();
    return 0;
}
