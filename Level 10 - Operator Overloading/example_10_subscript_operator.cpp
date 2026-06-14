#include <cstddef>
#include <iostream>
#include <stdexcept>

class Scores {
    static const std::size_t count = 3;
    int values[count];

    void checkIndex(std::size_t index) const {
        if (index >= count) {
            throw std::out_of_range("Score index is out of range");
        }
    }

public:
    Scores() : values{0, 0, 0} {}

    int& operator[](std::size_t index) {
        checkIndex(index);
        return values[index];
    }

    const int& operator[](std::size_t index) const {
        checkIndex(index);
        return values[index];
    }
};

int main() {
    Scores scores;
    scores[0] = 85;
    scores[1] = 90;
    scores[2] = 95;

    const Scores& readOnlyScores = scores;
    std::cout << "Second score: " << readOnlyScores[1] << '\n';
    return 0;
}
