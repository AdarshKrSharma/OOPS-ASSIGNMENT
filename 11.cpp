#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Define two integer numbers
    int num1, num2;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    // 1. Addition (+)
    cout << "Addition:       " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

    // 2. Subtraction (-)
    cout << "Subtraction:    " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;

    // 3. Multiplication (*)
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    // 4. Integer Division (/)
    // Since num1 and num2 are ints, the result is an int (decimals dropped)
    cout << "Integer Div:    " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;

    // 5. Modulus (%)
    // Returns the remainder
    cout << "Modulus:        " << num1 << " % " << num2 << " = " << (num1 % num2) << endl;

    // 6. Floating Point Division
    // We cast one variable to double to get a decimal result
    double exactDiv = (double)num1 / num2;
    cout << "Exact Div:      " << num1 << " / " << num2 << " = " << exactDiv << endl;

    return 0;
}
