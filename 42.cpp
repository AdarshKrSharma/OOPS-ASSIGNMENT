#include <iostream>
using namespace std;

class BankAccount {
    // 1. Private Area
    // These variables cannot be accessed directly from main()
    private:
        double balance;
        int pinCode;

    // 2. Public Area
    // These functions can be called from main()
    public:
        // Function to set initial values (a simplified "setter")
        void openAccount(double initialAmount, int pin) {
            if (initialAmount >= 0) {
                balance = initialAmount;
                pinCode = pin;
            } else {
                balance = 0;
                cout << "Invalid initial amount!" << endl;
            }
        }

        // Public function to modify private data
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount; // We can access 'balance' here because we are inside the class
                cout << "Deposited: $" << amount << endl;
            }
        }

        // Public function to read private data (a "getter")
        void displayBalance() {
            cout << "Current Balance: $" << balance << endl;
        }
};

int main() {
    BankAccount myAccount;

    // --- Valid Operations (Using Public functions) ---
    cout << "--- Opening Account ---" << endl;
    myAccount.openAccount(1000.00, 1234); // OK: openAccount is public

    myAccount.deposit(500.00);            // OK: deposit is public
    myAccount.displayBalance();           // OK: displayBalance is public


    // --- Invalid Operations (Trying to access Private data) ---
    
    // myAccount.balance = 500000; // ERROR! Compiler will stop this.
    // cout << myAccount.pinCode;  // ERROR! Private member.

    /* Uncommenting the lines above will cause a compile-time error:
       "member BankAccount::balance is inaccessible"
    */

    return 0;
}