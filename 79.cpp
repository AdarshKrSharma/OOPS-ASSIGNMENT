#include <iostream>
#include <string>

class BankAccount {
private:
    // Hidden data members
    std::string accountHolder;
    double balance;

public:
    // Constructor to initialize data
    BankAccount(std::string name, double initialBalance) {
        accountHolder = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
            std::cout << "Invalid initial balance! Setting to 0." << std::endl;
        }
    }

    // Setter method (Controlled modification)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Successfully deposited: $" << amount << std::endl;
        } else {
            std::cout << "Deposit amount must be positive!" << std::endl;
        }
    }

    // Getter method (Controlled access)
    double getBalance() const {
        return balance;
    }

    void displayInfo() const {
        std::cout << "Account Holder: " << accountHolder << " | Balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount myAccount("John Doe", 1000.0);

    // myAccount.balance = 5000000; // ERROR: balance is private (Hidden)
    
    // Interaction happens only through public interface
    myAccount.deposit(500.0);
    std::cout << "Current Balance: $" << myAccount.getBalance() << std::endl;

    myAccount.deposit(-100.0); // Attempting invalid operation
    
    return 0;
}