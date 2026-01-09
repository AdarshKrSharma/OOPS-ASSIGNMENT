#include <iostream>
using namespace std;

int main()
{
    double num;

    // 1. Get Input
    cout << "Enter any number: ";
    cin >> num;

    // 2. Check Conditions
    if (num > 0)
    {
        // Condition 1: Number is greater than 0
        cout << "The number " << num << " is POSITIVE." << endl;
    }
    else if (num < 0)
    {
        // Condition 2: Number is less than 0
        cout << "The number " << num << " is NEGATIVE." << endl;
    }
    else
    {
        // Condition 3: If it's not positive and not negative, it must be zero
        cout << "The number is ZERO." << endl;
    }

    return 0;
}