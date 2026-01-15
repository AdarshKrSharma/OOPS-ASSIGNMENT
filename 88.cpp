#include <iostream>

class Base {
public:
    int x = 10;
    void show() {
        std::cout << "Base class show() called" << std::endl;
    }
};

class Derived : public Base {
    // Inherits x and show()
};

int main() {
    Derived obj;
    std::cout << "Value of x: " << obj.x << std::endl; // Accessing base data
    obj.show();                                      // Accessing base function
    return 0;
}