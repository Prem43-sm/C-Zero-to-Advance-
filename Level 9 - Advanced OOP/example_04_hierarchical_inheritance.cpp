#include <iostream>

class Shape {
public:
    virtual ~Shape() {}
    virtual double area() const = 0;
};

class Rectangle : public Shape {
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }
};

class Circle : public Shape {
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        const double pi = 3.14159;
        return pi * radius * radius;
    }
};

int main() {
    Rectangle rectangle(4.0, 3.0);
    Circle circle(2.0);

    std::cout << "Rectangle area: " << rectangle.area() << '\n';
    std::cout << "Circle area: " << circle.area() << '\n';
    return 0;
}
