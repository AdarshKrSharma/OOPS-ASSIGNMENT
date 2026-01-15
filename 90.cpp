#include <iostream>

class Base1 {
public:
    void greet() {
        std::cout << "Hello from Base1" << std::endl;
    }
};

class Base2 {
public:
    void greet() {
        std::cout << "Hello from Base2" << std::endl;
    }
};

class Child : public Base1, public Base2 {
public:
    // Resolving ambiguity inside a member function
    void identify() {
        std::cout << "Inside Child class..." << std::endl;
        
        Base1::greet(); // Resolving using Scope Resolution
        Base2::greet(); // Resolving using Scope Resolution
    }
};

int main() {
    Child obj;

    // obj.greet(); // ERROR: Request for member 'greet' is ambiguous

    // 1. Resolving ambiguity from main()
    std::cout << "Calling from main():" << std::endl;
    obj.Base1::greet();
    obj.Base2::greet();

    std::cout << "\n--------------------------\n";

    // 2. Calling the internal resolver function
    obj.identify();

    return 0;
}