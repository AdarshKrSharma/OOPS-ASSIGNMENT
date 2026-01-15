#include <iostream>
using namespace std;

class Demo {
private:
    int id;

public:
    // Constructor
    Demo(int i) {
        id = i;
        cout << "Constructor called for Object " << id << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called for Object " << id << " (Memory Released)" << endl;
    }
};

int main() {
    cout << "Inside main function..." << endl;

    // Creating object 1 in main scope
    Demo obj1(1);

    {
        cout << "\nEntering a nested block..." << endl;
        // Creating object 2 in a local/nested scope
        Demo obj2(2);
        cout << "Exiting the nested block..." << endl;
    } // obj2 goes out of scope here and is destroyed

    cout << "\nBack in main. Program is about to end..." << endl;

    return 0; 
} // obj1 goes out of scope here and is destroyed