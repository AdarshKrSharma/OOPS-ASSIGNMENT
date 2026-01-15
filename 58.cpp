#include <iostream>
#include <cstring>
using namespace std;

class Buffer {
private:
    char* data; // Pointer to store the base address of allocated memory
    int size;

public:
    // Parameterized Constructor with dynamic allocation
    Buffer(const char* input) {
        size = strlen(input) + 1; // +1 for the null terminator '\0'
        data = new char[size];    // Dynamically allocating memory on the Heap
        strcpy(data, input);      // Copying data to the allocated space
        
        cout << "Constructor: Allocated " << size << " bytes for string: " << data << endl;
    }

    void display() {
        cout << "Buffer Content: " << data << endl;
    }

    // Destructor to free the allocated memory
    ~Buffer() {
        delete[] data; // Deallocating the array from the Heap
        cout << "Destructor: Memory successfully released." << endl;
    }
};

int main() {
    // Memory is allocated when the object is created
    Buffer myBuffer("Hello World");
    myBuffer.display();

    return 0; // Destructor is automatically called here
}