#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    // storing original value of a in temporary variable c
    c = a;
    // swapping value of b in a
    a = b;
    // putting temporary variable i.e c's stored value in b
    b = c;
    cout << "Afer Swapping" << "\n";
    cout << "a = " << a << "\n";
    cout << "b = " << b;
    return 0;
}