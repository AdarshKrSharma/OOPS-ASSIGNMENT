#include <iostream>

// 1. Forward Declaration of ClassB
class Package; 

class Box {
private:
    int weight;

public:
    Box(int w) : weight(w) {}

    // 2. Declare the common friend function
    friend void findMax(Box b, Package p);
};

class Package {
private:
    int weight;

public:
    Package(int w) : weight(w) {}

    // 3. Declare the same function as a friend here too
    friend void findMax(Box b, Package p);
};

// 4. Define the common friend function
void findMax(Box b, Package p) {
    if (b.weight > p.weight) {
        std::cout << "The Box is heavier (" << b.weight << " units)." << std::endl;
    } else if (p.weight > b.weight) {
        std::cout << "The Package is heavier (" << p.weight << " units)." << std::endl;
    } else {
        std::cout << "Both have the same weight." << std::endl;
    }
}

int main() {
    Box myBox(50);
    Package myPackage(80);

    // Call the common friend function
    findMax(myBox, myPackage);

    return 0;
}