#include <bits/stdc++.h>
using namespace std;

int main() {
    // a = 5 (Binary: 0101)
    // b = 9 (Binary: 1001)
    int a = 5;
    int b = 9;

    cout << "a = " << a << " (0101)" << endl;
    cout << "b = " << b << " (1001)" << endl;
    cout << "-----------------------------" << endl;

    // 1. Bitwise AND (&)
    // Set bit to 1 if BOTH bits are 1
    // 0101 & 1001 = 0001 (Decimal: 1)
    cout << "Bitwise AND (a & b): " << (a & b) << endl;

    // 2. Bitwise OR (|)
    // Set bit to 1 if AT LEAST ONE bit is 1
    // 0101 | 1001 = 1101 (Decimal: 13)
    cout << "Bitwise OR  (a | b): " << (a | b) << endl;

    // 3. Bitwise XOR (^)
    // Set bit to 1 if bits are DIFFERENT
    // 0101 ^ 1001 = 1100 (Decimal: 12)
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;

    // 4. Bitwise NOT (~)
    // Inverts all bits (0 becomes 1, 1 becomes 0)
    // ~0101 = ...11111010 (Decimal: -6 due to 2's complement storage)
    cout << "Bitwise NOT (~a):    " << (~a) << endl;

    // 5. Left Shift (<<)
    // Shifts bits to the left, filling with 0. 
    // Effectively multiplies by 2^n.
    // 0101 << 1 = 1010 (Decimal: 10)
    cout << "Left Shift  (a << 1): " << (a << 1) << endl;

    // 6. Right Shift (>>)
    // Shifts bits to the right. 
    // Effectively divides by 2^n.
    // 0101 >> 1 = 0010 (Decimal: 2)
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;

    return 0;
}