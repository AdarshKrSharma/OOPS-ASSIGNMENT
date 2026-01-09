#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    // We declare arrays with a maximum size (e.g., 100x100)
    // to handle user input up to that limit.
    int a[100][100], b[100][100], sum[100][100];

    // 1. Get the matrix dimensions
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    // 2. Input Matrix A
    cout << "\n--- Enter elements of 1st Matrix ---" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    // 3. Input Matrix B
    cout << "\n--- Enter elements of 2nd Matrix ---" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << ": ";
            cin >> b[i][j];
        }
    }

    // 4. Adding the two matrices
    // We loop through every cell and add the corresponding values
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // 5. Displaying the Result
    cout << "\nSum of the two matrices is: " << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << sum[i][j] << "  "; // Print value followed by spaces
        }
        cout << endl; // New line after every row
    }

    return 0;
}