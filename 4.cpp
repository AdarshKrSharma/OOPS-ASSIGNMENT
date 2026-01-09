#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Before Swapping: a = " << a << ", b = " << b << "\n";

    // 1. a now holds the sum of the original a and b
    a = a + b; // a = 10 + 20 = 30

    // 2. b gets the original value of a (30 - 20 = 10)
    b = a - b; // b = 30 - 20 = 10

    // 3. a gets the original value of b (30 - 10 = 20)
    a = a - b; // a = 30 - 10 = 20

    cout << "After Swapping: a = " << a << ", b = " << b << "\n";

    return 0;
}