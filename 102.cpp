#include <iostream>

class Base {
public:
    Base() { std::cout << "Base Constructor\n"; }
    ~Base() { std::cout << "Base Destructor\n"; } // Not virtual!
};

class Derived : public Base {
    int* array;
public:
    Derived() { 
        std::cout << "Derived Constructor\n"; 
        array = new int[10]; 
    }
    ~Derived() { 
        std::cout << "Derived Destructor (Cleaning up memory)\n"; 
        delete[] array; 
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; // PROBLEM: Only calls ~Base(), memory in Derived is leaked!
    return 0;
}