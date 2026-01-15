#include <iostream>

class Base {
public:
    Base() { std::cout << "Base Constructor" << std::endl; }
    
    // Virtual destructor is best practice for inheritance
    virtual ~Base() { 
        std::cout << "Base Destructor (End)" << std::endl; 
    }
};

class Intermediate : public Base {
public:
    Intermediate() { std::cout << "Intermediate Constructor" << std::endl; }
    
    ~Intermediate() { 
        std::cout << "Intermediate Destructor" << std::endl; 
    }
};

class Derived : public Intermediate {
public:
    Derived() { std::cout << "Derived Constructor" << std::endl; }
    
    ~Derived() { 
        std::cout << "Derived Destructor (Start)" << std::endl; 
    }
};

int main() {
    {
        std::cout << "--- Object entering scope ---" << std::endl;
        Derived obj;
        std::cout << "--- Object leaving scope ---" << std::endl;
    } // obj goes out of scope here

    return 0;
}