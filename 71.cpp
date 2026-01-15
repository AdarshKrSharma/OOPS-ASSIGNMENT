#include <iostream>

class item {
private:
    static int count; // Declaration: Shared by all objects
    int number;       // Regular member: Unique to each object

public:
    item(int a) {
        number = a;
        count++; // Increment shared counter
    }

    void getCount() {
        std::cout << "Current Count: " << count << std::endl;
    }

    void showNumber() {
        std::cout << "Item Number: " << number << std::endl;
    }
};

// MANDATORY: Definition and initialization outside the class
int item::count = 0;

int main() {
    item i1(101), i2(202), i3(303);

    std::cout << "--- After creating 3 objects ---" << std::endl;
    i1.getCount(); 
    
    item i4(404);
    std::cout << "--- After creating 4th object ---" << std::endl;
    // All objects see the same updated count
    i4.getCount(); 

    return 0;
}