#include <iostream>
#include <cmath> // Required for pow() function
using namespace std;

int main()
{
    // Declare variables for coefficients and x
    double a, b, c, x, result;

    cout << "--- Algebraic Expression Evaluator ---" << endl;
    cout << "Expression: y = ax^2 + bx + c" << endl;

    // 1. Get User Input
    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for b: ";
    cin >> b;

    cout << "Enter value for c: ";
    cin >> c;

    cout << "Enter value for x: ";
    cin >> x;

    // 2. Evaluate the Expression
    // Method 1: Using arithmetic operators (Faster for simple squares)
    // result = (a * x * x) + (b * x) + c;

    // Method 2: Using the power function from <cmath> library
    // Syntax: pow(base, exponent) -> pow(x, 2) is x squared
    result = (a * pow(x, 2)) + (b * x) + c;

    cout << "For x = " << x << ", the result y is: " << result << endl;

    return 0;
}