#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Account account;
    account.setBalance(1000);

    cout << "Balance: " << account.getBalance() << endl;

    return 0;
}
