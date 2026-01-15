#include <iostream>
#include <string>
using namespace std;

class Computer {
private:
    string brand;

public:
    // Outer class constructor
    Computer(string b) : brand(b) {}

    // Nested Class definition
    class CPU {
    private:
        string model;
        double clockSpeed;

    public:
        CPU(string m, double speed) : model(m), clockSpeed(speed) {}

        void displayCPUInfo() {
            cout << "CPU Model: " << model << endl;
            cout << "Clock Speed: " << clockSpeed << " GHz" << endl;
        }
    };

    void showComputer() {
        cout << "Computer Brand: " << brand << endl;
    }
};

int main() {
    // 1. Create an instance of the Outer class
    Computer myPC("Dell");
    myPC.showComputer();

    // 2. Create an instance of the Nested class
    // Use the scope resolution operator (::) to access CPU
    Computer::CPU myProcessor("Intel i7", 3.6);
    
    cout << "\n--- Hardware Details ---" << endl;
    myProcessor.displayCPUInfo();

    return 0;
}