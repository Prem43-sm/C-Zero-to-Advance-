#include <iostream>
using namespace std;

class University {
public:
    class Department {
    public:
        void showName() {
            cout << "Computer Science Department" << endl;
        }
    };
};

int main() {
    University::Department department;
    department.showName();

    return 0;
}
