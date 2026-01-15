#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }

    // Copy Constructor
    // Note: We use 'const' to prevent modification and '&' to pass by reference
    Point(const Point &p) {
        x = p.x;
        y = p.y;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // 1. Create an object using the parameterized constructor
    Point p1(10, 20);
    cout << "Original ";
    p1.display();

    // 2. Create a new object p2 as a copy of p1
    // This triggers the Copy Constructor
    Point p2 = p1; 
    
    cout << "Copied ";
    p2.display();

    return 0;
}