#include <iostream>
using namespace std;

class Item {
private:
    // Static variable to keep track of count
    static int count;
    int id;

public:
    Item() {
        count++;         // Increment count whenever an object is created
        id = count;      // Assign a unique ID based on current count
        cout << "Object " << id << " created." << endl;
    }

    // Static function to access the static variable
    static void showCount() {
        cout << "Total objects currently active: " << count << endl;
    }
};

// Initialize the static variable outside the class
int Item::count = 0;

int main() {
    Item obj1;
    Item obj2;
    Item::showCount(); // Calling static function using class name

    Item obj3;
    Item::showCount();

    return 0;
}