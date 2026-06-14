#include <iostream>
#include <string>

class Employee {
    std::string name;

protected:
    const std::string& getName() const {
        return name;
    }

public:
    Employee(const std::string& employeeName) : name(employeeName) {}
    virtual ~Employee() {}

    virtual double calculateSalary() const = 0;
    virtual std::string role() const = 0;

    void display() const {
        std::cout << getName() << " | " << role()
                  << " | Salary: " << calculateSalary() << '\n';
    }
};

class Developer : public Employee {
    double monthlySalary;

public:
    Developer(const std::string& name, double salary)
        : Employee(name), monthlySalary(salary) {}

    double calculateSalary() const override {
        return monthlySalary;
    }

    std::string role() const override {
        return "Developer";
    }
};

class Manager : public Employee {
    double baseSalary;
    double bonus;

public:
    Manager(const std::string& name, double salary, double managerBonus)
        : Employee(name), baseSalary(salary), bonus(managerBonus) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    std::string role() const override {
        return "Manager";
    }
};

int main() {
    Developer developer("Riya", 60000.0);
    Manager manager("Kabir", 75000.0, 12000.0);
    Employee* employees[] = {&developer, &manager};

    for (int i = 0; i < 2; ++i) {
        employees[i]->display();
    }
    return 0;
}
