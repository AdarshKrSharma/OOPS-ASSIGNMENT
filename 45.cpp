#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    // Constructor to initialize numbers
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    double add() { return num1 + num2; }
    
    double subtract() { return num1 - num2; }
    
    double multiply() { return num1 * num2; }
    
    void divide() {
        if (num2 == 0) {
            cout << "Division: Error (Division by zero)" << endl;
        } else {
            cout << "Division: " << num1 / num2 << endl;
        }
    }
};

int main() {
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Creating an object of the Calculator class
    Calculator calc(a, b);

    cout << "\n--- Results ---" << endl;
    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    calc.divide();

    return 0;
}