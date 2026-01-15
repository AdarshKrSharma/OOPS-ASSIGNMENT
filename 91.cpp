#include <iostream>

class GrandParent {
public:
    GrandParent() {
        std::cout << "1. GrandParent Constructor called" << std::endl;
    }
};

class Parent : public GrandParent {
public:
    Parent() {
        std::cout << "2. Parent Constructor called" << std::endl;
    }
};

class Child : public Parent {
public:
    Child() {
        std::cout << "3. Child Constructor called" << std::endl;
    }
};

int main() {
    std::cout << "Creating Child object..." << std::endl;
    Child obj;
    
    return 0;
}