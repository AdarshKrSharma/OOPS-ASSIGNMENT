#include <iostream>
using namespace std;

class Room {
private:
    double length, breadth;

public:
    // 1. Default Constructor (No arguments)
    Room() {
        length = 0;
        breadth = 0;
        cout << "Default Constructor: Room initialized with 0 dimensions." << endl;
    }

    // 2. Parameterized Constructor (One argument - for Square rooms)
    Room(double side) {
        length = breadth = side;
        cout << "Single Parameter Constructor: Square room created." << endl;
    }

    // 3. Parameterized Constructor (Two arguments - for Rectangular rooms)
    Room(double l, double b) {
        length = l;
        breadth = b;
        cout << "Two Parameter Constructor: Rectangular room created." << endl;
    }

    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    // Calls the default constructor
    Room emptyRoom;
    cout << "Area: " << emptyRoom.calculateArea() << "\n" << endl;

    // Calls the constructor with one parameter
    Room squareRoom(10.5);
    cout << "Area: " << squareRoom.calculateArea() << "\n" << endl;

    // Calls the constructor with two parameters
    Room rectRoom(12.0, 8.5);
    cout << "Area: " << rectRoom.calculateArea() << "\n" << endl;

    return 0;
}