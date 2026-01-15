#include <iostream>

class Base {
public:
    // Virtual function allows overriding
    virtual void identify() {
        std::cout << "I am the Base class." << std::endl;
    }
};

class Derived : public Base {
public:
    // Overriding the base class function
    // The 'override' keyword is optional but recommended for safety
    void identify() override {
        std::cout << "I am the Derived class." << std::endl;
    }
};

int main() {
    Base* ptr;          // Base class pointer
    Base baseObj;
    Derived derivedObj;

    // Pointing to Base object
    ptr = &baseObj;
    ptr->identify();    // Calls Base version

    // Pointing to Derived object
    ptr = &derivedObj;
    ptr->identify();    // Calls Derived version (Overriding in action)

    return 0;
}