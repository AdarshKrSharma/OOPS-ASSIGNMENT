#include <iostream>

class ClassA {
public:
    int a;
    ClassA() {
        a = 10;
    }
};

// Use the 'virtual' keyword to prevent duplicate copies of ClassA
class ClassB : virtual public ClassA {
public:
    int b = 20;
};

class ClassC : virtual public ClassA {
public:
    int c = 30;
};

class ClassD : public ClassB, public ClassC {
public:
    void display() {
        // Without 'virtual', 'a' would be ambiguous
        std::cout << "Value of a: " << a << std::endl; 
        std::cout << "Value of b: " << b << std::endl;
        std::cout << "Value of c: " << c << std::endl;
    }
};

int main() {
    ClassD obj;
    obj.display();
    
    // We can modify 'a' directly without specifying which path to take
    obj.a = 100;
    std::cout << "Updated a: " << obj.a << std::endl;

    return 0;
}