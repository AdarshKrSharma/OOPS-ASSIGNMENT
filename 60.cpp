#include <iostream>

class Tracker {
public:
    // Declaration inside the class
    static int count;

    Tracker() {
        count++; // Increment shared variable every time an object is made
    }
};

// Definition and Initialization outside the class (Mandatory)
int Tracker::count = 0; 

int main() {
    Tracker a, b, c;
    
    std::cout << "Total objects created: " << Tracker::count << std::endl; // Output: 3
    return 0;
}