#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize dimensions
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Member function to calculate area
    double calculateArea() {
        return length * width;
    }

    // Member function to display the result
    void display() {
        cout << "Rectangle Dimensions: " << length << " x " << width << endl;
        cout << "Total Area: " << calculateArea() << " sq. units" << endl;
    }
};

int main() {
    double len, wid;

    cout << "Enter length of rectangle: ";
    cin >> len;
    cout << "Enter width of rectangle: ";
    cin >> wid;

    // Creating an object and passing values to the constructor
    Rectangle rect(len, wid);

    cout << "\n--- Area Calculation ---" << endl;
    rect.display();

    return 0;
}