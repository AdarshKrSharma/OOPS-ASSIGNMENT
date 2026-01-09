#include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    // 1. Ask for the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // 2. Ask for the two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // 3. Switch statement on the operator
    switch (op)
    {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break; // Break prevents falling into the next case

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;

    case '/':
        // Simple check to prevent division by zero
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Error! Division by zero is not allowed." << endl;
        break;

    // 4. Default case runs if none of the above match
    default:
        cout << "Error! Invalid operator entered." << endl;
        break;
    }

    return 0;
}