#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;
    cout << "-----------------------------" << endl;

    // Simple If Statement
    // This code block ONLY runs if the condition is true
    if (age >= 18)
    {
        cout << "Access Granted: You are eligible to vote." << endl;
    }

    // This line runs regardless of the result above
    cout << "Thank you for checking." << endl;

    return 0;
}