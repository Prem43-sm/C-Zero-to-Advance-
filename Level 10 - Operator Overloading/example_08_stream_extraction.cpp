#include <iostream>

class Point {
    int x;
    int y;

public:
    Point() : x(0), y(0) {}

    friend std::istream& operator>>(std::istream& input, Point& point) {
        input >> point.x >> point.y;
        return input;
    }

    friend std::ostream& operator<<(std::ostream& output,
                                    const Point& point) {
        output << '(' << point.x << ", " << point.y << ')';
        return output;
    }
};

int main() {
    Point point;
    std::cout << "Enter x and y: ";

    if (std::cin >> point) {
        std::cout << "Point: " << point << '\n';
    } else {
        std::cout << "Invalid input.\n";
    }
    return 0;
}
