#include <iostream>
#include <string>

// Base Class (Grandparent)
class Animal {
public:
    void eat() {
        std::cout << "This animal eats food." << std::endl;
    }
};

// Intermediate Class (Parent) - Inherits from Animal
class Mammal : public Animal {
public:
    void breathe() {
        std::cout << "Mammals breathe air." << std::endl;
    }
};

// Derived Class (Child) - Inherits from Mammal
class Dog : public Mammal {
public:
    void bark() {
        std::cout << "The dog barks: Woof! Woof!" << std::endl;
    }
};

int main() {
    Dog myDog;

    // Dog accesses its own member
    myDog.bark();

    // Dog accesses member from intermediate class (Mammal)
    myDog.breathe();

    // Dog accesses member from base class (Animal)
    myDog.eat();

    return 0;
}