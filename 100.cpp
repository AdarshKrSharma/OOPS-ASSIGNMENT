#include <iostream>

// Abstract Base Class
class Shape {
protected:
    float dimension;

public:
    void getDimension() {
        std::cout << "Enter dimension: ";
        std::cin >> dimension;
    }

    // Pure Virtual Functions
    virtual void calculateArea() = 0; 
    virtual void draw() = 0;

    // Virtual destructor is vital for abstract classes
    virtual ~Shape() {}
};

// Derived Class 1
class Square : public Shape {
public:
    void calculateArea() override {
        std::cout << "Area of Square: " << dimension * dimension << std::endl;
    }
    void draw() override {
        std::cout << "Drawing a Square..." << std::endl;
    }
};

// Derived Class 2
class Circle : public Shape {
public:
    void calculateArea() override {
        std::cout << "Area of Circle: " << 3.14 * dimension * dimension << std::endl;
    }
    void draw() override {
        std::cout << "Drawing a Circle..." << std::endl;
    }
};

int main() {
    // Shape s; // ERROR: Cannot instantiate abstract class

    Shape* ptr; // OK: Can create a pointer to an abstract class

    Square sq;
    ptr = &sq;
    ptr->getDimension();
    ptr->draw();
    ptr->calculateArea();

    Circle circ;
    ptr = &circ;
    ptr->getDimension();
    ptr->draw();
    ptr->calculateArea();

    return 0;
}