#include <iostream>
#include <string>

// Base Class: Basic Information
class Employee {
protected:
    int empId;
    std::string empName;

public:
    void getBasicInfo() {
        std::cout << "Enter Employee ID: ";
        std::cin >> empId;
        std::cout << "Enter Employee Name: ";
        std::cin.ignore();
        getline(std::cin, empName);
    }
};

// Intermediate Class: Salary Components
class Salary : public Employee {
protected:
    double basicPay;
    double hra, da; // House Rent Allowance, Dearness Allowance

public:
    void getSalaryDetails() {
        std::cout << "Enter Basic Salary: ";
        std::cin >> basicPay;
        // Calculating allowances as percentage of basic pay
        hra = 0.2 * basicPay; // 20% HRA
        da = 0.5 * basicPay;  // 50% DA
    }
};

// Derived Class: Final Calculation and Reporting
class Payroll : public Salary {
    double grossSalary;
    double netSalary;
    double tax;

public:
    void calculatePayroll() {
        grossSalary = basicPay + hra + da;
        tax = 0.1 * grossSalary; // 10% Tax deduction
        netSalary = grossSalary - tax;
    }

    void displayPayslip() {
        std::cout << "\n===============================" << std::endl;
        std::cout << "       EMPLOYEE PAYSLIP        " << std::endl;
        std::cout << "===============================" << std::endl;
        std::cout << "ID          : " << empId << std::endl;
        std::cout << "Name        : " << empName << std::endl;
        std::cout << "Basic Pay   : $" << basicPay << std::endl;
        std::cout << "HRA (20%)   : $" << hra << std::endl;
        std::cout << "DA (50%)    : $" << da << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "Gross Total : $" << grossSalary << std::endl;
        std::cout << "Tax (10%)   : -$" << tax << std::endl;
        std::cout << "-------------------------------" << std::endl;
        std::cout << "NET SALARY  : $" << netSalary << std::endl;
        std::cout << "===============================" << std::endl;
    }
};

int main() {
    Payroll emp;

    emp.getBasicInfo();
    emp.getSalaryDetails();
    emp.calculatePayroll();
    emp.displayPayslip();