#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Define two boolean variables
    bool a = true;
    bool b = false;

    cout << boolalpha; // Prints "true"/"false" instead of 1/0
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "-----------------------------" << endl;

    // 1. Logical AND (&&)
    // Returns true ONLY if both operands are true
    cout << "AND (a && b): " << (a && b) << endl;
    // (true && false) -> false

    // 2. Logical OR (||)
    // Returns true if AT LEAST ONE operand is true
    cout << "OR  (a || b): " << (a || b) << endl;
    // (true || false) -> true

    // 3. Logical NOT (!)
    // Reverses the logical state of its operand
    cout << "NOT (!a):     " << (!a) << endl;
    // (!true) -> false

    cout << "NOT (!b):     " << (!b) << endl;
    // (!false) -> true

    cout << "-----------------------------" << endl;

    // Practical Example with Relational Operators
    int x = 10, y = 20, z = 30;
    cout << "x=10, y=20, z=30" << endl;
    cout << "Is x < y AND y < z? " << ((x < y) && (y < z)) << endl;

    return 0;
}