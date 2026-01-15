#include <iostream>
#include <string>

class Student {
private:
    std::string name;

public:
    Student() {
        std::cout << "Default Constructor called" << std::endl;
        name = "Unknown";
    }

    Student(std::string n) : name(n) {
        std::cout << "Parameterized Constructor called for " << name << std::endl;
    }

    ~Student() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    void display() {
        std::cout << "Name: " << name << std::endl;
    }
};

int main() {
    // 1. Dynamic creation of a single object
    std::cout << "--- Creating single student ---" << std::endl;
    Student* s1 = new Student("Alice"); // Calls parameterized constructor
    s1->display();
    
    delete s1; // Calls destructor and frees memory
    std::cout << std::endl;

    // 2. Dynamic creation of an array of objects
    std::cout << "--- Creating array of 3 students ---" << std::endl;
    Student* studentArray = new Student[3]; // Calls default constructor 3 times
    
    // Deleting the array
    // Note: use delete[] for arrays!
    delete[] studentArray; 

    return 0;
}