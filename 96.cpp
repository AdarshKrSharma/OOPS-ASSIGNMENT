#include <iostream>

// 1. Function to calculate area of a Circle (1 double argument)
double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}

// 2. Function to calculate area of a Rectangle (2 double arguments)
double calculateArea(double length, double width) {
    return length * width;
}

// 3. Function to calculate area of a Square (1 int argument)
int calculateArea(int side) {
    return side * side;
}

int main() {
    // Calls the 'int' version
    std::cout << "Area of Square (side 5): " << calculateArea(5) << std::endl;

    // Calls the 'double' version
    std::cout << "Area of Circle (radius 3.5): " << calculateArea(3.5) << std::endl;

    // Calls the 'double, double' version
    std::cout << "Area of Rectangle (4.0x5.0): " << calculateArea(4.0, 5.0) << std::endl;

    return 0;
}