#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    double marks;

public:
    // Default Constructor
    Student() {
        rollNo = 0;
        marks = 0.0;
        cout << "Default Constructor Called!" << endl;
        cout << "Initial values assigned to object." << endl;
    }

    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    // Object creation triggers the default constructor
    Student s1; 
    s1.display();

    Student s2;
    s2.display();

    return 0;
}