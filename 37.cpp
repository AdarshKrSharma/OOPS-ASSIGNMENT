#include <iostream>
using namespace std;

int main() {
    // 1. Declare a character array with a sufficient buffer size
    char str[100];
    int length = 0;

    // 2. Take input from the user
    cout << "Enter a string: ";
    // using cin.getline to ensure we capture spaces between words
    cin.getline(str, 100);

    // 3. Iterate until the null terminator is found
    // The loop checks if the character at the current index is '\0'
    while (str[length] != '\0') {
        length++;
    }

    // 4. Output the result
    cout << "The length of the string is: " << length << endl;

    return 0;
}