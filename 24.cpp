#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter the student's marks (0-100): ";
    cin >> marks;

    // We check for invalid input first (optional but good practice)
    if (marks < 0 || marks > 100)
    {
        cout << "Invalid Input! Please enter marks between 0 and 100." << endl;
    }
    // Check for Grade A
    else if (marks >= 90)
    {
        cout << "Grade: A (Excellent)" << endl;
    }
    // Check for Grade B
    else if (marks >= 80)
    {
        cout << "Grade: B (Very Good)" << endl;
    }
    // Check for Grade C
    else if (marks >= 70)
    {
        cout << "Grade: C (Good)" << endl;
    }
    // Check for Grade D
    else if (marks >= 60)
    {
        cout << "Grade: D (Pass)" << endl;
    }
    // If none of the above are true, the student has failed
    else
    {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}