#include <iostream>

class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // A CONST member function (has 'const' after the signature)
    // This promises not to modify any data members.
    void display() const {
        std::cout << "Radius: " << radius << " (Viewed by const function)" << std::endl;
    }

    // A NON-CONST member function
    void setRadius(double r) {
        radius = r;
    }
};

int main() {
    // 1. Regular Object
    Circle c1(5.0);
    c1.setRadius(7.0); // OK
    c1.display();      // OK

    // 2. Constant Object
    const Circle c2(10.0);

    // c2.setRadius(12.0); // ERROR: Cannot call non-const function on const object
    c2.display();          // OK: Can call const member functions

    return 0;
}