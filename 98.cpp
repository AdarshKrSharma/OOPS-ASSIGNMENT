#include <iostream>
#include <vector>

// Base Class
class Animal {
public:
    // Virtual function - tells the compiler to look for overrides at runtime
    virtual void speak() {
        std::cout << "The animal makes a generic sound." << std::endl;
    }

    // Virtual destructor - essential when using polymorphism
    virtual ~Animal() {} 
};

// Derived Class 1
class Dog : public Animal {
public:
    void speak() override { // 'override' ensures we are correctly overriding a virtual function
        std::cout << "The Dog barks: Woof! Woof!" << std::endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    void speak() override {
        std::cout << "The Cat meows: Meow! Meow!" << std::endl;
    }
};

int main() {
    // A base class pointer can point to any derived class object
    Animal* myPet;

    Dog d;
    Cat c;

    // Pointing to a Dog
    myPet = &d;
    myPet->speak(); // Output: Dog barks

    // Pointing to a Cat
    myPet = &c;
    myPet->speak(); // Output: Cat meows

    return 0;
}