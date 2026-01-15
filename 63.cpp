#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double salary;

public:
    Employee(std::string n, double s) : name(n), salary(s) {}

    // 1. Declare the friend function inside the class
    friend void calculateBonus(Employee &e, double percentage);
};

// 2. Define the friend function outside (no friend keyword here)
void calculateBonus(Employee &e, double percentage) {
    // Accessing private data member 'salary' directly
    double bonus = e.salary * (percentage / 100);
    std::cout << "Employee: " << e.name << "\nBonus: $" << bonus << std::endl;
}

int main() {
    Employee emp("Alice", 50000);

    // Call the friend function like a normal global function
    calculateBonus(emp, 10); 

    return 0;
}