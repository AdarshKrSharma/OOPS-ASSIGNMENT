#include <iostream>

class Account {
private:
    double balance;

public:
    Account(double b) : balance(b) {}

    // Constant Member Function: Promises not to change 'balance'
    double getBalance() const {
        // balance += 10; // ERROR: Cannot modify data in a const function
        return balance;
    }

    // Regular Member Function: Allowed to change data
    void deposit(double amount) {
        balance += amount;
    }
};

int main() {
    Account myAcc(500.0);
    const Account frozenAcc(1000.0); // A constant object

    // 1. Regular objects can call both
    myAcc.deposit(50.0);
    std::cout << "Balance: " << myAcc.getBalance() << std::endl;

    // 2. Const objects can ONLY call const functions
    std::cout << "Frozen Balance: " << frozenAcc.getBalance() << std::endl;
    // frozenAcc.deposit(100.0); // ERROR: Cannot call non-const function on const object

    return 0;
}