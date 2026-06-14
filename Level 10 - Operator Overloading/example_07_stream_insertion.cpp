#include <iostream>
#include <string>

class Student {
    std::string name;
    int marks;

public:
    Student(const std::string& studentName, int studentMarks)
        : name(studentName), marks(studentMarks) {}

    friend std::ostream& operator<<(std::ostream& output,
                                    const Student& student) {
        output << student.name << " scored " << student.marks;
        return output;
    }
};

int main() {
    Student student("Anaya", 92);
    std::cout << student << '\n';
    return 0;
}
