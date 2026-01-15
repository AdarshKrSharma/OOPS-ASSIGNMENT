#include <iostream>
#include <string>

// Base Class: Stores basic details
class Student {
protected:
    int rollNumber;
    std::string name;

public:
    void getStudentData() {
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
        std::cout << "Enter Name: ";
        std::cin.ignore(); // Clear buffer
        getline(std::cin, name);
    }
};

// Intermediate Class: Stores marks (Inherits from Student)
class Test : public Student {
protected:
    float math, science, english;

public:
    void getMarks() {
        std::cout << "Enter Math marks: ";
        std::cin >> math;
        std::cout << "Enter Science marks: ";
        std::cin >> science;
        std::cout << "Enter English marks: ";
        std::cin >> english;
    }
};

// Derived Class: Processes results (Inherits from Test)
class Result : public Test {
    float total;
    float percentage;

public:
    void calculate() {
        total = math + science + english;
        percentage = total / 3.0;
    }

    void displayReport() {
        std::cout << "\n---------- STUDENT REPORT ----------" << std::endl;
        std::cout << "Roll No    : " << rollNumber << std::endl;
        std::cout << "Name       : " << name << std::endl;
        std::cout << "Math       : " << math << std::endl;
        std::cout << "Science    : " << science << std::endl;
        std::cout << "English    : " << english << std::endl;
        std::cout << "------------------------------------" << std::endl;
        std::cout << "Total Marks: " << total << "/300" << std::endl;
        std::cout << "Percentage : " << percentage << "%" << std::endl;
        std::cout << "------------------------------------" << std::endl;
    }
};

int main() {
    Result student1;

    // Accessing functions from all levels of inheritance
    student1.getStudentData();
    student1.getMarks();
    student1.calculate();
    student1.displayReport();

    return 0;
}