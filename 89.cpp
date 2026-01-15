#include <iostream>

class ClassA {
public:
    void display() {
        std::cout << "Display from Class A" << std::endl;
    }
};

class ClassB {
public:
    void display() {
        std::cout << "Display from Class B" << std::endl;
    }
};

class ClassC : public ClassA, public ClassB {
public:
    void show() {
        std::cout << "Class C is active." << std::endl;
    }
};

int main() {
    ClassC obj;

    // obj.display(); // ERROR: Request for member 'display' is ambiguous
    
    // To solve this, we must use the Scope Resolution Operator (::)
    obj.ClassA::display(); // Calls version from Class A
    obj.ClassB::display(); // Calls version from Class B

    return 0;
}