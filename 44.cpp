#include <iostream>
#include <string>
#include <limits> // Required for buffer clearing

using namespace std;

class Employee
{
    // 1. Private Data Members (The Attributes)
private:
    int empId;
    string name;
    float salary;

    // 2. Public Member Functions (The Actions)
public:
    // Function to read input from user
    void readData()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        // CLEAR BUFFER: Handling the 'Phantom Newline' issue
        // We must do this because we are switching from 'cin' to 'getline'
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Employee Name: ";
        getline(cin, name); // Allows names with spaces (e.g., "John Doe")

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display output to console
    void displayData()
    {
        cout << "\n-----------------------------" << endl;
        cout << "      EMPLOYEE DETAILS       " << endl;
        cout << "-----------------------------" << endl;
        cout << "ID:      " << empId << endl;
        cout << "Name:    " << name << endl;
        cout << "Salary:  $" << salary << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    // 3. Create an Object of the class
    Employee emp1;

    cout << "--- Input Phase ---" << endl;
    // Call the function to get data
    emp1.readData();

    // Call the function to show data
    emp1.displayData();

    return 0;
}