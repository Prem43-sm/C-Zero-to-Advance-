#include <iostream>

class Shape {
public:
    virtual ~Shape() {}
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle.\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a rectangle.\n";
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;
    Shape* shapes[] = {&circle, &rectangle};

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
    }
    return 0;
}
