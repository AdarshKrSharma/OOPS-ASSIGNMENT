#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        // Function 1: Defined INSIDE the class
        // This is used for simple operations.
        void setDimensions(int l, int w) {
            length = l;
            width = w;
        }

        // Function 2: Defined INSIDE the class
        int calculateArea() {
            return length * width;
        }

        // Function 3: Declared INSIDE, but Defined OUTSIDE
        // We only write the prototype here.
        int calculatePerimeter(); 
};

// --- Defining Function OUTSIDE the class ---
// Syntax: ReturnType ClassName::FunctionName()
int Rectangle::calculatePerimeter() {
    // We can still access private members (length, width) 
    // because this function belongs to the class.
    return 2 * (length + width);
}

int main() {
    Rectangle rect;

    // 1. Initialize using the function defined inside
    rect.setDimensions(10, 5);

    // 2. Call function defined inside
    cout << "Area: " << rect.calculateArea() << endl;

    // 3. Call function defined outside
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    return 0;
}