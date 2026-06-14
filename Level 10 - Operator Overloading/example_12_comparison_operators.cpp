#include <iostream>

class Money {
    long long paise;

public:
    Money(long long amountInPaise) : paise(amountInPaise) {}

    bool operator==(const Money& other) const {
        return paise == other.paise;
    }

    bool operator!=(const Money& other) const {
        return !(*this == other);
    }

    bool operator<(const Money& other) const {
        return paise < other.paise;
    }
};

int main() {
    Money wallet(50000);
    Money bill(42500);
    Money sameWallet(50000);

    std::cout << std::boolalpha;
    std::cout << "Wallet equals bill: " << (wallet == bill) << '\n';
    std::cout << "Bill is smaller: " << (bill < wallet) << '\n';
    std::cout << "Wallets differ: " << (wallet != sameWallet) << '\n';
    return 0;
}
