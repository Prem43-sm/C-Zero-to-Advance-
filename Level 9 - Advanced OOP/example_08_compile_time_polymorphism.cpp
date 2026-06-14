#include <iostream>
#include <string>

class Printer {
public:
    void print(int value) const {
        std::cout << "Integer: " << value << '\n';
    }

    void print(double value) const {
        std::cout << "Double: " << value << '\n';
    }

    void print(const std::string& value) const {
        std::cout << "Text: " << value << '\n';
    }
};

int main() {
    Printer printer;
    printer.print(25);
    printer.print(3.5);
    printer.print(std::string("Hello"));
    return 0;
}
