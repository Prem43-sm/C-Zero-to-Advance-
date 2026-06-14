#include <cstddef>
#include <iostream>

class IntegerList {
    std::size_t size;
    int* values;

public:
    IntegerList(std::size_t listSize)
        : size(listSize), values(new int[listSize]()) {}

    IntegerList(const IntegerList& other)
        : size(other.size), values(new int[other.size]) {
        for (std::size_t i = 0; i < size; ++i) {
            values[i] = other.values[i];
        }
    }

    IntegerList& operator=(const IntegerList& other) {
        if (this == &other) {
            return *this;
        }

        int* newValues = new int[other.size];
        for (std::size_t i = 0; i < other.size; ++i) {
            newValues[i] = other.values[i];
        }

        delete[] values;
        values = newValues;
        size = other.size;
        return *this;
    }

    ~IntegerList() {
        delete[] values;
    }

    int& operator[](std::size_t index) {
        return values[index];
    }

    const int& operator[](std::size_t index) const {
        return values[index];
    }
};

int main() {
    IntegerList first(3);
    first[0] = 10;
    first[1] = 20;
    first[2] = 30;

    IntegerList second(1);
    second = first;
    second[0] = 99;

    std::cout << "First value: " << first[0] << '\n';
    std::cout << "Copied value: " << second[0] << '\n';
    return 0;
}
