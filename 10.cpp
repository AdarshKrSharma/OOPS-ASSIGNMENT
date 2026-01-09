#include <bits/stdc++.h>
#include <iomanip> // Required for std::setprecision

using namespace std;

int main()
{
    cout << "--- Implicit Type Casting (Safe Conversion) ---" << endl;

    // 1. Implicit Conversion (int to double)
    int num_int = 5;
    double num_double = num_int; // Compiler automatically converts int to double (5.0)

    cout << "Integer value: " << num_int << endl;
    cout << "Double value after implicit cast: " << num_double << endl;
    cout << "Explanation: Conversion from a smaller type (int) to a larger type (double) is automatic." << endl;

    cout << "\n--- Explicit Type Casting (Manual Conversion) ---" << endl;

    // 2. Explicit Conversion (double to int) - Potential Data Loss
    double price = 9.99;

    // Using C-style cast
    int whole_part_c = (int)price;

    // Using C++ static_cast (Preferred)
    int whole_part_cpp = static_cast<int>(price);

    cout << "Original double value: " << fixed << setprecision(2) << price << endl;
    cout << "Integer value (C-style cast): " << whole_part_c << endl;
    cout << "Integer value (static_cast): " << whole_part_cpp << endl;
    cout << "Explanation: The decimal part (.99) is (lost) when casting double to int." << endl;

    cout << "\n--- Explicit Cast in Arithmetic Operations ---" << endl;

    // 3. Explicit Cast to force floating-point division
    int total_sum = 100;
    int count = 9;

    // Integer division (100 / 9 = 11)
    double average_int = total_sum / count;

    // Floating-point division (100.0 / 9 = 11.11...)
    double average_float = static_cast<double>(total_sum) / count;

    cout << "Result of Integer Division (100 / 9): " << average_int << endl;
    cout << "Result of Floating-Point Division (with cast): " << fixed << setprecision(4) << average_float << endl;
    cout << "Explanation: Casting 'total_sum' to double forces the entire division operation to be done using floating-point math." << endl;

    return 0;
}