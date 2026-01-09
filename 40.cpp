#include <iostream>
#include <string>
using namespace std;

// 1. Define the Structure
// This acts as a blueprint. No memory is allocated yet.
struct Student
{
    string name;
    int rollNumber;
    float marks;
}; // <--- NOTICE: The semicolon here is mandatory!

int main()
{
    // 2. Declare a variable of type 'Student'
    Student s1;

    cout << "--- Enter Student Details ---" << endl;

    // 3. Input Data
    // We access struct members using the dot (.) operator
    cout << "Enter Name: ";
    getline(cin, s1.name);

    cout << "Enter Roll Number: ";
    cin >> s1.rollNumber;

    cout << "Enter Marks: ";
    cin >> s1.marks;

    // 4. Output Data
    cout << "\n--- Student Info ---" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollNumber << endl;
    cout << "Marks: " << s1.marks << "%" << endl;

    return 0;
}