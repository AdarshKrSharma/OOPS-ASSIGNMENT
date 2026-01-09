#include <bits/stdc++.h>
using namespace std;

int main()
{
    double p, r, t, SI = 0, total_amt = 0;
    cout << "Enter Principal Amount: ";
    cin >> p;
    cout << "Enter Rate of Interest: ";
    cin >> r;
    cout << "Enter Time in years: ";
    cin >> t;
    SI = (p * r * t) / 100;
    cout << "Simple Interest= " << SI << endl;
    total_amt = p + SI;
    cout << "Total Amount= " << total_amt;
    return 0;
}