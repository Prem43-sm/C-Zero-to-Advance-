#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int width) {
        this->width = width;
    }

    friend void printWidth(Box box);
};

void printWidth(Box box) {
    cout << "Width: " << box.width << endl;
}

int main() {
    Box box(10);
    printWidth(box);

    return 0;
}
