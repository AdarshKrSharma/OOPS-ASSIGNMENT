#include <iostream>

class Base {
public:
    // This will result in Static Binding
    void staticShow() {
        std::cout << "Static Binding: Base Class" << std::endl;
    }

    // This will result in Dynamic Binding because of 'virtual'
    virtual void dynamicShow() {
        std::cout << "Dynamic Binding: Base Class" << std::endl;
    }
};

class Derived : public Base {
public:
    void staticShow() {
        std::cout << "Static Binding: Derived Class" << std::endl;
    }

    void dynamicShow() override {
        std::cout << "Dynamic Binding: Derived Class" << std::endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;

    // 1. Static Binding
    // The compiler looks at the pointer type (Base*) and fixes the call.
    ptr->staticShow(); 

    // 2. Dynamic Binding
    // The compiler sees 'virtual' and waits until runtime to see what 
    // the pointer is actually pointing to (a Derived object).
    ptr->dynamicShow();

    return 0;
}