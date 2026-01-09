#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;
    cout << "First Number: " << a << endl;
    cout << "Second Number: " << b << endl;

    // By default, C++ outputs 1 for true and 0 for false.
    // We use boolalpha to print "true" or "false" text instead.
    cout << boolalpha;

    // 1. Equal to (==)
    cout << "Equal to (a == b):              " << (a == b) << endl;

    // 2. Not Equal to (!=)
    cout << "Not Equal to (a != b):          " << (a != b) << endl;

    // 3. Greater than (>)
    cout << "Greater than (a > b):           " << (a > b) << endl;

    // 4. Less than (<)
    cout << "Less than (a < b):              " << (a < b) << endl;

    // 5. Greater than or equal to (>=)
    cout << "Greater than or equal to (a >= b): " << (a >= b) << endl;

    // 6. Less than or equal to (<=)
    cout << "Less than or equal to (a <= b):    " << (a <= b) << endl;

    return 0;
}