#include <iostream>
using namespace std;

int main()
{
    int n;

    // 1. Ask the user for the limit
    cout << "Enter the limit (N): ";
    cin >> n;

    cout << "Series: ";

    // 2. The For Loop
    // Structure: for (initialization; condition; update)
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    cout << endl; // Just moves to the next line for cleaner output

    return 0;
}