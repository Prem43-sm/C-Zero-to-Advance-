#include <iostream>

class Printer {
public:
    void print() const {
        std::cout << "Printing document.\n";
    }
};

class Scanner {
public:
    void scan() const {
        std::cout << "Scanning document.\n";
    }
};

class AllInOne : public Printer, public Scanner {
public:
    void copy() const {
        scan();
        print();
    }
};

int main() {
    AllInOne machine;
    machine.print();
    machine.scan();
    machine.copy();
    return 0;
}
