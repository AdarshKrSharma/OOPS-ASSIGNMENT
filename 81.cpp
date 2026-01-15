#include <iostream>
#include <string>

// Base Class
class Vehicle {
public:
    std::string fuel = "Petrol";

    void refuel() {
        std::cout << "Vehicle is refueling..." << std::endl;
    }
};

// Derived Class (Single Inheritance)
class Car : public Vehicle {
public:
    std::string model = "Mustang";

    void displayInfo() {
        // Accessing member from Base class
        std::cout << "Model: " << model << std::endl;
        std::cout << "Fuel Type: " << fuel << std::endl;
    }
};

int main() {
    Car myCar;

    // Calling function from Base class using Derived class object
    myCar.refuel();

    // Calling function from Derived class
    myCar.displayInfo();

    return 0;
}