#include <iostream>

class ComplexNumber {
    double real;
    double imaginary;

public:
    ComplexNumber(double realPart = 0.0, double imaginaryPart = 0.0)
        : real(realPart), imaginary(imaginaryPart) {}

    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real,
                             imaginary + other.imaginary);
    }

    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real,
                             imaginary - other.imaginary);
    }

    bool operator==(const ComplexNumber& other) const {
        return real == other.real && imaginary == other.imaginary;
    }

    friend std::ostream& operator<<(std::ostream& output,
                                    const ComplexNumber& number) {
        output << number.real;
        if (number.imaginary >= 0.0) {
            output << " + " << number.imaginary << 'i';
        } else {
            output << " - " << -number.imaginary << 'i';
        }
        return output;
    }

    friend std::istream& operator>>(std::istream& input,
                                    ComplexNumber& number) {
        input >> number.real >> number.imaginary;
        return input;
    }
};

int main() {
    ComplexNumber first(5.0, 3.0);
    ComplexNumber second(2.0, -4.0);

    std::cout << "First: " << first << '\n';
    std::cout << "Second: " << second << '\n';
    std::cout << "Sum: " << first + second << '\n';
    std::cout << "Difference: " << first - second << '\n';
    std::cout << std::boolalpha
              << "Equal: " << (first == second) << '\n';
    return 0;
}
