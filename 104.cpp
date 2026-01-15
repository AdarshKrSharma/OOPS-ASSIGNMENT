#include <iostream>

class ElectronicDevice {
public:
    // Virtual function enables Dynamic Dispatch
    virtual void turnOn() {
        std::cout << "Device is powering up..." << std::endl;
    }

    virtual ~ElectronicDevice() {} // Virtual destructor for safety
};

class Laptop : public ElectronicDevice {
public:
    void turnOn() override {
        std::cout << "Laptop: Booting OS and showing login screen." << std::endl;
    }
};

class Smartphone : public ElectronicDevice {
public:
    void turnOn() override {
        std::cout << "Smartphone: Lighting up screen and scanning face ID." << std::endl;
    }
};

int main() {
    // Base class pointer
    ElectronicDevice* myDevice;

    Laptop macbook;
    Smartphone iphone;

    // Point to a Laptop object
    myDevice = &macbook;
    // DYNAMIC DISPATCH: resolved to Laptop::turnOn() at runtime
    myDevice->turnOn();

    // Point to a Smartphone object
    myDevice = &iphone;
    // DYNAMIC DISPATCH: resolved to Smartphone::turnOn() at runtime
    myDevice->turnOn();

    return 0;
}