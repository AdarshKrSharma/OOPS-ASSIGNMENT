#include <iostream>
#include <vector>

// Abstract Base Class
class Employee {
protected:
    std::string name;
public:
    Employee(std::string n) : name(n) {}
    
    // Pure virtual function
    virtual void showDetails() = 0;
    
    virtual ~Employee() {} // Virtual destructor for safe cleanup
};

// Derived Class 1
class SalariedEmployee : public Employee {
    double monthlySalary;
public:
    SalariedEmployee(std::string n, double s) : Employee(n), monthlySalary(s) {}
    
    void showDetails() override {
        std::cout << "[Salaried] Name: " << name << " | Monthly Pay: $" << monthlySalary << std::endl;
    }
};

// Derived Class 2
class HourlyEmployee : public Employee {
    double hourlyRate;
    int hoursWorked;
public:
    HourlyEmployee(std::string n, double r, int h) : Employee(n), hourlyRate(r), hoursWorked(h) {}
    
    void showDetails() override {
        std::cout << "[Hourly]   Name: " << name << " | Weekly Pay: $" << (hourlyRate * hoursWorked) << std::endl;
    }
};

int main() {
    // Creating a polymorphic array (Array of Base Class Pointers)
    const int SIZE = 3;
    Employee* staff[SIZE];

    // Filling the array with different derived objects
    staff[0] = new SalariedEmployee("Alice", 5000);
    staff[1] = new HourlyEmployee("Bob", 20, 40);
    staff[2] = new SalariedEmployee("Charlie", 6500);

    std::cout << "--- Processing Employee Payroll ---" << std::endl;
    
    // The loop handles all objects uniformly using the base pointer
    for (int i = 0; i < SIZE; i++) {
        staff[i]->showDetails(); // Runtime Polymorphism in action
    }

    // Cleanup: Memory must be deleted manually for pointers
    for (int i = 0; i < SIZE; i++) {
        delete staff[i];
    }

    return 0;
}