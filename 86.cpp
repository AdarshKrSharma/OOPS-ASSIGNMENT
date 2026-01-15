#include <iostream>

class Engine {
public:
    void internalCombustion() {
        std::cout << "Engine: Fuel combustion started..." << std::endl;
    }
    
    void fuelInjection() {
        std::cout << "Engine: Fuel injected." << std::endl;
    }
};

// Private Inheritance
class Car : private Engine {
public:
    void startCar() {
        std::cout << "Car: Starting ignition sequence." << std::endl;
        
        // The Derived class CAN access public members of the Base class
        fuelInjection();
        internalCombustion();
        
        std::cout << "Car: Ready to drive!" << std::endl;
    }
};

int main() {
    Car myCar;

    // This works: startCar is a public method of Car
    myCar.startCar();

    // The following lines would cause COMPILER ERRORS:
    // myCar.fuelInjection();      // Error: 'fuelInjection' is private in this context
    // myCar.internalCombustion(); // Error: 'internalCombustion' is private in this context

    return 0;
}