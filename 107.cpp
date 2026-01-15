#include <iostream>

// Abstract Base Class
class Shape {
public:
    // Pure Virtual Functions
    virtual void calculateArea() = 0;
    virtual void draw() = 0;

    // Virtual destructor is mandatory for clean memory management
    virtual ~Shape() {
        std::cout << "Shape Destructor called" << std::endl;
    }
};

// Concrete Class 1: Circle
class Circle : public Shape {
    float radius;
public:
    Circle(float r) : radius(r) {}

    void calculateArea() override {
        std::cout << "Circle Area: " << 3.14159 * radius * radius << std::endl;
    }

    void draw() override {
        std::cout << "Drawing a Circle with radius " << radius << std::endl;
    }
};

// Concrete Class 2: Rectangle
class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void calculateArea() override {
        std::cout << "Rectangle Area: " << length * width << std::endl;
    }

    void draw() override {
        std::cout << "Drawing a Rectangle (" << length << "x" << width << ")" << std::endl;
    }
};

int main() {
    // Shape s; // This would cause a COMPILER ERROR

    // Using pointers to the Abstract Base Class to achieve polymorphism
    Shape* shapes[2];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw();
        shapes[i]->calculateArea();
        std::cout << "--------------------" << std::endl;
    }

    // Cleaning up memory
    delete shapes[0];
    delete shapes[1];

    return 0;
}