#include <iostream>
using namespace std;

int main()
{
    int number;

    // 1. Ask the user for input
    cout << "Enter an integer: ";
    cin >> number;

    // 2. If-Else statement
    if (number % 2 == 0)
    {
        // This block runs if the remainder is 0 (True)
        cout << number << " is an Even number." << endl;
    }
    else
    {
        // This block runs if the remainder is NOT 0 (False)
        cout << number << " is an Odd number." << endl;
    }

    return 0;
}