#include <iostream>

class Shape {
public:
    virtual ~Shape() {}
    virtual double area() const = 0;
};

class Triangle : public Shape {
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Triangle triangle(8.0, 5.0);
    Shape& shape = triangle;
    std::cout << "Triangle area: " << shape.area() << '\n';
    return 0;
}
