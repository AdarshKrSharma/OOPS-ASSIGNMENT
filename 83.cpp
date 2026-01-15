#include <iostream>
#include <string>

// Base Class 1
class Phone {
public:
    void makeCall() {
        std::cout << "Making a phone call..." << std::endl;
    }
};

// Base Class 2
class Camera {
public:
    void takePhoto() {
        std::cout << "Capturing a photo..." << std::endl;
    }
};

// Derived Class (Multiple Inheritance)
class SmartDevice : public Phone, public Camera {
public:
    void browseInternet() {
        std::cout << "Browsing the web..." << std::endl;
    }
};

int main() {
    SmartDevice myPhone;

    // Accessing members from the first base class
    myPhone.makeCall();

    // Accessing members from the second base class
    myPhone.takePhoto();

    // Accessing its own members
    myPhone.browseInternet();

    return 0;
}