#include <iostream>
#include <string>

class BaseSecurity {
protected:
    std::string secretKey = "ALPHA_123";

public:
    void showBaseMessage() {
        std::cout << "Base Security System Active." << std::endl;
    }
};

// Protected Inheritance
class System : protected BaseSecurity {
public:
    void status() {
        // Can access Public and Protected members of base
        showBaseMessage();
        std::cout << "System is running..." << std::endl;
    }
};

// Further Derived Class
class AdminSystem : public System {
public:
    void revealKey() {
        // Access is still possible here because it was 'protected' in System
        std::cout << "Admin Access - Key: " << secretKey << std::endl;
    }
};

int main() {
    System userSys;
    userSys.status();

    // userSys.showBaseMessage(); // ERROR: Protected in this context
    // userSys.secretKey;         // ERROR: Protected in this context

    AdminSystem admin;
    admin.revealKey(); // Works! Admin can still see what was protected

    return 0;
}