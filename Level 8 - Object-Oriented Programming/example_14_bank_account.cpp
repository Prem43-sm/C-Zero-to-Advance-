#include <iostream>
using namespace std;

class BankAccount {
private:
    string holderName;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        holderName = name;
        balance = initialBalance >= 0 ? initialBalance : 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal." << endl;
        }
    }

    void display() {
        cout << "Holder: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Prem", 1000);
    account.deposit(500);
    account.withdraw(300);
    account.display();

    return 0;
}
