#include <iostream>

// Forward declaration so Alpha knows Beta exists
class Beta;

class Alpha {
private:
    int valueA;

public:
    Alpha(int val) : valueA(val) {}

    void display() { std::cout << "Alpha Value: " << valueA << std::endl; }

    // Declare the friend function
    friend void swapValues(Alpha &a, Beta &b);
};

class Beta {
private:
    int valueB;

public:
    Beta(int val) : valueB(val) {}

    void display() { std::cout << "Beta Value: " << valueB << std::endl; }

    // Declare the same friend function
    friend void swapValues(Alpha &a, Beta &b);
};

// Definition of the friend function using references
void swapValues(Alpha &a, Beta &b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    Alpha objA(100);
    Beta objB(200);

    std::cout << "Before Swapping:" << std::endl;
    objA.display();
    objB.display();

    // Call the friend function
    swapValues(objA, objB);

    std::cout << "\nAfter Swapping:" << std::endl;
    objA.display();
    objB.display();

    return 0;
}