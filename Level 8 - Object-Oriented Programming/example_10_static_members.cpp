#include <iostream>
using namespace std;

class Student {
private:
    static int count;

public:
    Student() {
        count++;
    }

    static void showCount() {
        cout << "Objects created: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student first;
    Student second;
    Student third;

    Student::showCount();

    return 0;
}
