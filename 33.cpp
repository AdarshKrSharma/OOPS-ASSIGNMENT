#include <iostream>
#include <climits> // Required for INT_MIN (the smallest possible integer)
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements (at least 2): ";
    cin >> n;

    // Validation: We need at least 2 numbers to find a second largest
    if (n < 2)
    {
        cout << "Invalid Input! Array size must be at least 2." << endl;
        return 0;
    }

    int arr[n];

    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Initialize variables to the smallest possible integer
    int largest = INT_MIN;
    int second = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        // Case 1: We found a new largest number
        if (arr[i] > largest)
        {
            second = largest; // Old largest becomes second
            largest = arr[i]; // New number becomes largest
        }

        // Case 2: We found a number between largest and second
        // AND it is not equal to largest (avoids duplicates)
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        cout << "No second largest element found (all elements might be equal)." << endl;
    else
        cout << "The Second Largest element is: " << second << endl;

    return 0;
}