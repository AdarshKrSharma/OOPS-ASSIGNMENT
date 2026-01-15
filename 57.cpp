#include <iostream>
using namespace std;

// Base Class
class GrandParent {
public:
    GrandParent() {
        cout << "1. GrandParent Constructor Called" << endl;
    }
};

// Intermediate Derived Class
class Parent : public GrandParent {
public:
    Parent() {
        cout << "2. Parent Constructor Called" << endl;
    }
};

// Final Derived Class
class Child : public Parent {
public:
    Child() {
        cout << "3. Child Constructor Called" << endl;
    }
};

int main() {
    cout << "Creating a Child object..." << endl;
    cout << "---------------------------" << endl;
    
    // Creating an object of the most derived class
    Child obj;

    cout << "---------------------------" << endl;
    return 0;
}