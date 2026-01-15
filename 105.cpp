#include <iostream>

class Base {
public:
    // virtual keyword is the 'switch' that enables polymorphism
    virtual void printMessage() {
        std::cout << "Message from Base Class" << std::endl;
    }

    // Always use a virtual destructor when using base pointers
    virtual ~Base() {}
};

class Derived : public Base {
public:
    // Overriding the base class function
    void printMessage() override {
        std::cout << "Message from Derived Class" << std::endl;
    }
};

int main() {
    // 1. Create a pointer of Base type
    Base* ptr;

    // 2. Create an object of Derived type
    Derived obj;

    // 3. Point the base pointer to the derived object (Upcasting)
    ptr = &obj;

    // 4. Call the function using the pointer
    // Because printMessage is virtual, this calls the Derived version
    ptr->printMessage();

    return 0;
}