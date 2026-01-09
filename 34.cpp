#include <iostream>
using namespace std;

int main()
{
    int n;

    // 1. Input size
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // 2. Input elements
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 3. Reversal Logic (Two Pointers)
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }

    // 4. Display the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}