#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10; // Simple Assignment (=)

    cout << "Initial value of a: " << a << endl;

    // 1. Add and Assign (+=)
    // Equivalent to: a = a + 5
    a += 5;
    cout << "After a += 5:  " << a << endl; // a becomes 15

    // 2. Subtract and Assign (-=)
    // Equivalent to: a = a - 3
    a -= 3;
    cout << "After a -= 3:  " << a << endl; // 15 - 3 = 12

    // 3. Multiply and Assign (*=)
    // Equivalent to: a = a * 2
    a *= 2;
    cout << "After a *= 2:  " << a << endl; // 12 * 2 = 24

    // 4. Divide and Assign (/=)
    // Equivalent to: a = a / 4
    a /= 4;
    cout << "After a /= 4:  " << a << endl; // 24 / 4 = 6

    // 5. Modulus and Assign (%=)
    // Equivalent to: a = a % 4
    a %= 4;
    cout << "After a %= 4:  " << a << endl; // 6 % 4 = 2

    return 0;
}