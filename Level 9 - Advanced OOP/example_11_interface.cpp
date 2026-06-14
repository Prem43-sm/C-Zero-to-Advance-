#include <iostream>
#include <string>

class PaymentMethod {
public:
    virtual ~PaymentMethod() {}
    virtual void pay(double amount) const = 0;
};

class CardPayment : public PaymentMethod {
    std::string lastFourDigits;

public:
    CardPayment(const std::string& digits) : lastFourDigits(digits) {}

    void pay(double amount) const override {
        std::cout << "Paid " << amount
                  << " using card ending " << lastFourDigits << ".\n";
    }
};

class CashPayment : public PaymentMethod {
public:
    void pay(double amount) const override {
        std::cout << "Paid " << amount << " in cash.\n";
    }
};

int main() {
    CardPayment card("4321");
    CashPayment cash;
    PaymentMethod* methods[] = {&card, &cash};

    for (int i = 0; i < 2; ++i) {
        methods[i]->pay(750.0);
    }
    return 0;
}
