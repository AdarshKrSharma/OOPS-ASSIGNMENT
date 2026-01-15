#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    // Constructor
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Method to calculate volume
    double getVolume() const {
        return length * width * height;
    }

    // Overloading the '==' operator to compare two Box objects
    bool operator==(const Box& other) {
        return this->getVolume() == other.getVolume();
    }

    // Overloading the '>' operator
    bool operator>(const Box& other) {
        return this->getVolume() > other.getVolume();
    }
};

int main() {
    Box box1(10, 5, 2);  // Volume = 100
    Box box2(5, 4, 5);   // Volume = 100
    Box box3(12, 5, 2);  // Volume = 120

    cout << "Comparing Box 1 and Box 2:" << endl;
    if (box1 == box2) {
        cout << "Both boxes have the same volume." << endl;
    } else {
        cout << "Boxes have different volumes." << endl;
    }

    cout << "\nComparing Box 3 and Box 1:" << endl;
    if (box3 > box1) {
        cout << "Box 3 is larger than Box 1." << endl;
    }

    return 0;
}