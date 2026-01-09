#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    int a[10][10], b[10][10], mult[10][10];

    // 1. Get dimensions for Matrix A
    cout << "Enter rows and columns for Matrix A: ";
    cin >> r1 >> c1;

    // 2. Get dimensions for Matrix B
    cout << "Enter rows and columns for Matrix B: ";
    cin >> r2 >> c2;

    // 3. Validation: Can we multiply?
    if (c1 != r2)
    {
        cout << "Error! Column of Matrix A must equal Row of Matrix B." << endl;
        return 0;
    }

    // 4. Input Matrix A
    cout << "\nEnter elements of Matrix A:" << endl;
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    // 5. Input Matrix B
    cout << "\nEnter elements of Matrix B:" << endl;
    for (int i = 0; i < r2; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    // 6. Initialization: Set result matrix to 0
    // This is crucial because we will be adding values to these cells
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            mult[i][j] = 0;
        }
    }

    // 7. Multiplication Logic (3 Nested Loops)
    // i loops through Rows 
    // j loops through Columns of B
    // k loops through the common dimension (Cols of A / Rows of B)
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            for (int k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 8. Output the Result
    cout << "\nResulting Matrix:" << endl;
    for (int i = 0; i < r1; ++i)
    {
        for (int j = 0; j < c2; ++j)
        {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}