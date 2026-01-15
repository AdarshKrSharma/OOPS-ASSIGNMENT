#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    // 1. Default Constructor
    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default Constructor: Dimensions set to 0." << endl;
    }

    // 2. Parameterized Constructor (Single Argument - for a Square)
    Rectangle(int side) {
        length = width = side;
        cout << "One-argument Constructor: Square created." << endl;
    }

    // 3. Parameterized Constructor (Two Arguments - for a Rectangle)
    Rectangle(int l, int w) {
        length = l;
        width = w;
        cout << "Two-argument Constructor: Rectangle created." << endl;
    }

    void displayArea() {
        cout << "Area: " << length * width << endl;
        cout << "----------------------------" << endl;
    }
};

int main() {
    // Calling Default Constructor
    Rectangle r1;
    r1.displayArea();

    // Calling Single Parameter Constructor
    Rectangle r2(10);
    r2.displayArea();

    // Calling Two Parameter Constructor
    Rectangle r3(10, 5);
    r3.displayArea();

    return 0;
}