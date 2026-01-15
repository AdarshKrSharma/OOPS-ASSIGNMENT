#include <iostream>

class Base {
public:
    virtual void func() {
        std::cout << "Executed: Base::func()" << std::endl;
    }
    virtual ~Base() {} // Always use virtual destructors
};

class DerivedA : public Base {
public:
    void func() override {
        std::cout << "Executed: DerivedA::func()" << std::endl;
    }
};

class DerivedB : public Base {
public:
    void func() override {
        std::cout << "Executed: DerivedB::func()" << std::endl;
    }
};

int main() {
    Base* ptr; // Pointer to Base class
    
    DerivedA objA;
    DerivedB objB;

    // Call Mechanism Step 1: Point to objA
    ptr = &objA;
    // The VPTR in objA points to DerivedA's VTable.
    // ptr->func() looks at that VTable and finds DerivedA::func.
    ptr->func(); 

    // Call Mechanism Step 2: Point to objB
    ptr = &objB;
    // The VPTR in objB points to DerivedB's VTable.
    // ptr->func() now finds DerivedB::func.
    ptr->func();

    return 0;
}