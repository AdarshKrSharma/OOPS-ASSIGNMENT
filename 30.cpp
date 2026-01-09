#include <iostream>
using namespace std;

int main()
{
    int number;

// 1. Define a Label
// A label is just a name followed by a colon
input_step:

    cout << "Enter an even number: ";
    cin >> number;

    if (number % 2 != 0)
    {
        cout << "That is an odd number! Try again." << endl;

        // 2. The goto statement
        // Jump back to the label 'input_step'
        goto input_step;
    }

    cout << "Success! You entered the even number: " << number << endl;

    return 0;
}