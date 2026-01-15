#include <iostream>

class Student {
private:
    int id;
    static int totalStudents; // Static data member

public:
    Student() {
        totalStudents++;
        id = totalStudents;
    }

    // Static member function
    static void showTotal() {
        // std::cout << id; // ERROR: Cannot access non-static member 'id'
        std::cout << "Total Students registered: " << totalStudents << std::endl;
    }

    void displayID() {
        std::cout << "Student ID: " << id << std::endl;
    }
};

// Initialize static data member
int Student::totalStudents = 0;

int main() {
    // Calling static function without creating any objects
    Student::showTotal(); 

    Student s1, s2;
    s1.displayID();
    s2.displayID();

    // Calling static function after creating objects
    Student::showTotal();

    return 0;
}