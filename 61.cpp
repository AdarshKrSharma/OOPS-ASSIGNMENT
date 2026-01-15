#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double salary;

public:
    Employee(std::string name, double salary) {
        // name = name; // Error/Ambiguous: This would assign the parameter to itself
        
        this->name = name;     // 'this->name' refers to the class member
        this->salary = salary; // 'name' refers to the parameter
    }

    void display() {
        std::cout << "Name: " << this->name << " | Salary: " << this->salary << std::endl;
    }
};