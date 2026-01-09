#include <iostream>
using namespace std;

int main()
{
    int number;
    int i = 1; // 1. Initialization

    cout << "Enter a number to print its table: ";
    cin >> number;

    // 2. While Loop Condition
    while (i <= 10)
    {
        // Body of the loop
        cout << number << " * " << i << " = " << (number * i) << endl;

        // 3. Update
        i++;
    }

    return 0;
}