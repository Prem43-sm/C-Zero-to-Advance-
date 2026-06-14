#include <iostream>
using namespace std;

int main() {
    int totalMarks = 425;
    int subjects = 5;

    int integerAverage = totalMarks / subjects;
    double decimalAverage = static_cast<double>(totalMarks) / subjects;

    cout << "Integer average: " << integerAverage << endl;
    cout << "Decimal average: " << decimalAverage << endl;

    return 0;
}
