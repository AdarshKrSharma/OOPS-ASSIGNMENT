#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;

    // Ask user for input
    cout << "Enter a number: ";
    cin >> num;

    // --- Example 1: Check Even or Odd ---
    // Syntax: (Condition) ? (Value if True) : (Value if False);
    
    string result = (num % 2 == 0) ? "Even" : "Odd";

    cout << num << " is " << result << endl;


    // --- Example 2: Find Maximum of two numbers ---
    int a = 10, b = 20;
    
    // Check if a > b. If true, max is a. If false, max is b.
    int maxVal = (a > b) ? a : b;
    
    cout << "Between " << a << " and " << b << ", the maximum is: " << maxVal << endl;


    // --- Example 3: Pass/Fail Check ---
    int marks = 35;
    
    // If marks >= 40, print "Passed", otherwise print "Failed"
    (marks >= 40) ? cout << "Result: Passed" : cout << "Result: Failed";
    cout << endl;

    return 0;
}