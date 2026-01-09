#include <iostream>
using namespace std;

int main()
{
    cout << "Starting the loop..." << endl;

    for (int i = 1; i <= 10; i++)
    {

        // 1. CONTINUE Example
        if (i == 5)
        {
            cout << "(Skipping 5) ";
            continue; // Jumps immediately to i++
        }

        // 2. BREAK Example
        if (i == 8)
        {
            cout << "(Breaking at 8)";
            break; // Exits the loop immediately
        }

        cout << i << " ";
    }

    cout << "\nLoop has finished." << endl;

    return 0;
}