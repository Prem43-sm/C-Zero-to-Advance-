#include <iostream>
using namespace std;

int globalScore = 100;

void showScore() {
    int localBonus = 20;
    cout << "Global score: " << globalScore << endl;
    cout << "Local bonus: " << localBonus << endl;
}

int main() {
    int localScore = 50;

    cout << "Main local score: " << localScore << endl;
    showScore();

    return 0;
}
