#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int b = 10;

    cout << "Initial Values: a = " << a << ", b = " << b << endl;

    // 1. Post-Increment (a++)
    // "Use the value first, THEN increment it."
    cout << "Post-Increment (a++): " << a++ << endl; // Prints 10, then a becomes 11
    cout << "Value of a now:       " << a << endl;   // Prints 11

    cout << endl;

    // 2. Pre-Increment (++b)
    // "Increment the value first, THEN use it."
    cout << "Pre-Increment (++b):  " << ++b << endl; // b becomes 11, then prints 11
    cout << "Value of b now:       " << b << endl;   // Prints 11

    // Resetting values
    a = 10;
    b = 10;

    // 3. Post-Decrement (a--)
    // "Use the value first, THEN decrement it."
    cout << "Post-Decrement (a--): " << a-- << endl; // Prints 10, then a becomes 9
    cout << "Value of a now:       " << a << endl;   // Prints 9

    cout << endl;

    // 4. Pre-Decrement (--b)
    // "Decrement the value first, THEN use it."
    cout << "Pre-Decrement (--b):  " << --b << endl; // b becomes 9, then prints 9
    cout << "Value of b now:       " << b << endl;   // Prints 9

    return 0;
}