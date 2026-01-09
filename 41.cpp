#include <iostream>
#include <string>
using namespace std;

// 1. Defining the Class (The Blueprint)
class Car {
    // Access Specifier: 'public' means these can be accessed from outside the class
    public:
        // Data Members (Properties)
        string brand;
        string model;
        int year;

        // Member Function (Method / Action)
        void displayInfo() {
            cout << "Car Details: " << year << " " << brand << " " << model << endl;
        }

        void honk() {
            cout << "Beep beep!" << endl;
        }
}; // <--- Semicolon is mandatory here!

int main() {
    // 2. Creating Objects (The Actual Cars)
    Car car1;  // First object
    Car car2;  // Second object

    // 3. Assigning values to car1
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    // 4. Assigning values to car2
    car2.brand = "Tesla";
    car2.model = "Model 3";
    car2.year = 2024;

    // 5. Using the objects (Calling methods)
    cout << "--- Object 1 ---" << endl;
    car1.displayInfo();
    car1.honk();

    cout << "\n--- Object 2 ---" << endl;
    car2.displayInfo(); // Reusing the same code for different data

    return 0;
}