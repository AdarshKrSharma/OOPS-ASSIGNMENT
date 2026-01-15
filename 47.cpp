#include <iostream>
using namespace std;

class MaxFinder {
private:
    int num1, num2;

public:
    // Function to take input
    void input() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    // Function to find and return the largest number
    int findLargest() {
        if (num1 > num2) {
            return num1;
        } else {
            return num2;
        }
    }

    // Function to display the result
    void display() {
        if (num1 == num2) {
            cout << "Both numbers are equal." << endl;
        } else {
            cout << "The largest number is: " << findLargest() << endl;
        }
    }
};

int main() {
    MaxFinder obj; // Create an object of the class
    obj.input();   // Call input method
    obj.display(); // Call display method
    
    return 0;
}