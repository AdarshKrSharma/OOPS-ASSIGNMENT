#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    // 1. Outer If: Compare first two numbers
    if (num1 >= num2)
    {

        // 2. Inner If: If num1 is bigger than num2,
        // we only need to check if num1 is also bigger than num3
        if (num1 >= num3)
        {
            cout << "The largest number is: " << num1 << endl;
        }
        else
        {
            cout << "The largest number is: " << num3 << endl;
        }
    }
    else
    {
        // 3. Outer Else: If num1 is NOT bigger than num2,
        // that means num2 is the winner so far.
        // Now we check num2 against num3.
        if (num2 >= num3)
        {
            cout << "The largest number is: " << num2 << endl;
        }
        else
        {
            cout << "The largest number is: " << num3 << endl;
        }
    }

    return 0;
}