#include <iostream>
using namespace std;

int main() {
    double length;
    double width;

    cout << "Enter rectangle length: ";
    cin >> length;

    cout << "Enter rectangle width: ";
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
