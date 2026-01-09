#include <iostream>
using namespace std;

int main()
{
    int n;

    // 1. Get the size of the array
    cout << "Enter total number of elements: ";
    cin >> n;

    int arr[n];

    // 2. Input the array elements
    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // 3. Logic to find the largest
    // Step A: Assume the first element is the largest initially
    int maxVal = arr[0];

    // Step B: Loop through the rest of the array (starting from index 1)
    for (int i = 1; i < n; i++)
    {
        // If the current element is bigger than our current 'maxVal'
        if (arr[i] > maxVal)
        {
            maxVal = arr[i]; // Update maxVal
        }
    }

    // 4. Output the result
    cout << "\nThe largest element is: " << maxVal << endl;

    return 0;
}