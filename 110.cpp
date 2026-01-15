#include <iostream>
#include <vector>

// Base Class
class PaymentMethod {
public:
    // Implication: Virtual functions enable "Late Binding"
    virtual void processPayment(double amount) {
        std::cout << "Processing a generic payment of $" << amount << std::endl;
    }

    // Implication: A virtual destructor is required to prevent memory leaks
    virtual ~PaymentMethod() {
        std::cout << "PaymentMethod (Base) destroyed." << std::endl;
    }
};

class CreditCard : public PaymentMethod {
public:
    void processPayment(double amount) override {
        std::cout << "Processing Credit Card payment: Charged $" << amount << " plus 2% fee." << std::endl;
    }
    ~CreditCard() { std::cout << "CreditCard (Derived) destroyed." << std::endl; }
};

class Crypto : public PaymentMethod {
public:
    void processPayment(double amount) override {
        std::cout << "Processing Cryptocurrency payment: Transferred " << amount / 40000 << " BTC." << std::endl;
    }
    ~Crypto() { std::cout << "Crypto (Derived) destroyed." << std::endl; }
};

int main() {
    // Implication: We can store different types in a single collection (Heterogeneous Collection)
    std::vector<PaymentMethod*> wallet;

    wallet.push_back(new CreditCard());
    wallet.push_back(new Crypto());

    std::cout << "--- Executing Polymorphic Calls ---" << std::endl;
    for (PaymentMethod* p : wallet) {
        p->processPayment(100.0); // The "implication" is that the correct logic runs at runtime
    }

    std::cout << "\n--- Cleaning up Memory ---" << std::endl;
    for (PaymentMethod* p : wallet) {
        delete p; // Virtual destructor ensures the derived classes are cleaned up
    }

    return 0;
}