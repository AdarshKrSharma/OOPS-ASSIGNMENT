#include <iostream>
using namespace std;

int main() {
    // 1. Declare a normal integer variable
    int num = 10;
    
    // 2. Declare a pointer variable
    // The asterisk (*) here indicates 'ptr' is a pointer to an int
    int* ptr;

    // 3. Initialize the pointer
    // Store the address of 'num' into 'ptr'
    ptr = &num;

    cout << "--- Basic Pointer Info ---" << endl;
    cout << "Value of num: " << num << endl;
    cout << "Address of num (&num): " << &num << endl;
    cout << "Value stored in ptr: " << ptr << endl;

    // 4. Dereferencing
    // Accessing the value inside the address stored in ptr
    cout << "\n--- Dereferencing ---" << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    // 5. Modifying value through pointer
    // Changing *ptr changes 'num' because they share the same memory location
    *ptr = 20;
    
    cout << "\n--- After Modification ---" << endl;
    cout << "New value of num: " << num << endl; // num is now 20
    
    // 6. Pointer Arithmetic (Bonus)
    // Moving the pointer to the next memory block
    // Since int is usually 4 bytes, this will increase the address by 4
    cout << "\n--- Pointer Arithmetic ---" << endl;
    cout << "Current ptr address: " << ptr << endl;
    cout << "Next integer address (ptr + 1): " << (ptr + 1) << endl;

    return 0;
}