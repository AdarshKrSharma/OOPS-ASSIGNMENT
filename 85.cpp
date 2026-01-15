#include <iostream>

// Grandparent Class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating..." << std::endl;
    }
};

// Parent 1 - Virtual inheritance prevents duplicate 'Animal' members
class Mammal : virtual public Animal {
public:
    void walk() {
        std::cout << "Mammal is walking..." << std::endl;
    }
};

// Parent 2 - Virtual inheritance
class Bird : virtual public Animal {
public:
    void fly() {
        std::cout << "Bird is flying..." << std::endl;
    }
};

// Child Class - Hybrid Inheritance
class Bat : public Mammal, public Bird {
public:
    void sonar() {
        std::cout << "Bat is using sonar..." << std::endl;
    }
};

int main() {
    Bat myBat;

    myBat.eat();   // Calling Grandparent's method (No ambiguity!)
    myBat.walk();  // From Mammal
    myBat.fly();   // From Bird
    myBat.sonar(); // Own method

    return 0;
}