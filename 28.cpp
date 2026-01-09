#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1; // 1. Initialization

    cout << "Enter the limit (N): ";
    cin >> n;

    cout << "Series: ";

    // 2. Do-While Loop
    do
    {
        // Body of the loop
        cout << i << " ";

        // 3. Update
        i++;

    } while (i <= n); // 4. Condition (Note the semicolon at the end!)

    cout << endl;

    return 0;
}