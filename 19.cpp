#include <iostream>
using namespace std;

int main()
{
    int year;

    cout << "Enter a year to check: ";
    cin >> year;

    // Logic:
    // 1. If divisible by 400 -> LEAP (e.g., 2000)
    // 2. Else if divisible by 100 -> NOT LEAP (e.g., 1900)
    // 3. Else if divisible by 4 -> LEAP (e.g., 2024)
    // 4. Otherwise -> NOT LEAP

    // We can combine this into one complex condition:
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << year << " is a LEAP YEAR." << endl;
    }
    else
    {
        cout << year << " is NOT a leap year." << endl;
    }

    return 0;
}