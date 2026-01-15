#include <iostream>
#include <string>

// Base Class
class Account {
public:
    int accountNumber;
    double balance;

    void setDetails(int acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }

    void displayBalance() {
        std::cout << "Acc: " << accountNumber << " | Balance: $" << balance << std::endl;
    }
};

// Derived Class 1
class SavingsAccount : public Account {
public:
    void addInterest() {
        std::cout << "Adding interest to Savings Account..." << std::endl;
        balance += balance * 0.05; // 5% interest
    }
};

// Derived Class 2
class CheckingAccount : public Account {
public:
    void deductFees() {
        std::cout << "Deducting transaction fees from Checking Account..." << std::endl;
        balance -= 10.0; // Flat fee
    }
};

int main() {
    SavingsAccount sa;
    sa.setDetails(1001, 5000.0);
    sa.addInterest();
    sa.displayBalance();

    std::cout << "---------------------------" << std::endl;

    CheckingAccount ca;
    ca.setDetails(2002, 3000.0);
    ca.deductFees();
    ca.displayBalance();

    return 0;
}