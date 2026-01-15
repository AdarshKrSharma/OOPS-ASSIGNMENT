#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    void display() const {
        std::cout << feet << " ft " << inches << " in" << std::endl;
    }

    // Declare friend function for overloading +
    friend Distance operator+(const Distance& d1, const Distance& d2);
};

// Definition of overloaded operator (outside class)
Distance operator+(const Distance& d1, const Distance& d2) {
    int f = d1.feet + d2.feet;
    int i = d1.inches + d2.inches;

    // Adjust inches if >= 12
    if (i >= 12) {
        f += i / 12;
        i = i % 12;
    }
    return Distance(f, i);
}

int main() {
    Distance d1(5, 8), d2(3, 6);
    
    // Uses the friend function: operator+(d1, d2)
    Distance d3 = d1 + d2; 

    std::cout << "Total Distance: ";
    d3.display();

    return 0;
}