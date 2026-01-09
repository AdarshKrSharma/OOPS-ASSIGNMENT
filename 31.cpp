#include <iostream>
using namespace std;

int main()
{
    int n;

    // 1. Ask for the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare the array with size 'n'
    int arr[n];

    // 2. Input Loop
    // We use a loop to fill the array one by one
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // 3. Display Loop
    // We use another loop to read and print the values
    cout << "\nThe elements in the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}