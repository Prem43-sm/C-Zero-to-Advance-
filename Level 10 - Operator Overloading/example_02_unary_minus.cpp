#include <iostream>

class Point {
    int x;
    int y;

public:
    Point(int xValue, int yValue) : x(xValue), y(yValue) {}

    Point operator-() const {
        return Point(-x, -y);
    }

    void display() const {
        std::cout << '(' << x << ", " << y << ")\n";
    }
};

int main() {
    Point original(3, -5);
    Point opposite = -original;

    original.display();
    opposite.display();
    return 0;
}
