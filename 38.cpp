#include <iostream>
using namespace std;

int main() {
    char source[100], destination[100];
    int i = 0;

    // 1. Get the source string
    cout << "Enter the source string: ";
    cin.getline(source, 100);

    // 2. Copy character by character
    // Loop continues as long as we haven't hit the null terminator in source
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // 3. IMPORTANT: Terminate the destination string
    // If you forget this, the program won't know where the string ends!
    destination[i] = '\0';

    // 4. Display result
    cout << "Original String: " << source << endl;
    cout << "Copied String:   " << destination << endl;

    return 0;
}