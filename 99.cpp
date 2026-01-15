#include <iostream>

class Base {
public:
    // Virtual function
    virtual void display() {
        std::cout << "Display from Base Class" << std::endl;
    }

    void show() {
        std::cout << "Show from Base Class (Non-Virtual)" << std::endl;
    }
};

class Derived : public Base {
public:
    // Redefining the virtual function
    void display() override {
        std::cout << "Display from Derived Class" << std::endl;
    }

    // Redefining a non-virtual function
    void show() {
        std::cout << "Show from Derived Class" << std::endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;

    // 1. Calls Derived version because it is VIRTUAL
    ptr->display(); 

    // 2. Calls Base version because it is NON-VIRTUAL (Early Binding)
    ptr->show();

    return 0;
}