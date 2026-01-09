#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14159; // PI cannot be changed
void circle()
{
    double radius;
    cout << "Enter circle radius: ";
    cin >> radius;
    double area = PI * radius * radius;
    cout << "Area of circle: " << area << endl;
}
void triangle()
{
    double b, h, area;
    cout << "Enter triangle base: ";
    cin >> b;
    cout << "Enter triangle height: ";
    cin >> h;
    area = 0.5 * b * h;
    cout << "Traingle's area: " << area;
}
void rectangle()
{
    double l, b, area;
    cout << "Enter rectangle length: ";
    cin >> l;
    cout << "Enter rectangle breadth: ";
    cin >> b;
    area = l * b;
    cout << "Rectangle's area: " << area;
}
int main()
{
    int choice;
    cout << "Circle, Triangle & Rectangle Area Finder" << endl;
    cout << "Press 1 for Circle Area" << endl;
    cout << "Press 2 for Triangle Area" << endl;
    cout << "Press 3 for Rectangle Area" << endl;
    cout << "Press 4 for exiting the program" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        circle();
        break;
    case 2:
        triangle();
        break;
    case 3:
        rectangle();
        break;
    case 4:
        cout << "Exiting Program";
        break;
    default:
        cout << "Wrong Choice";
    }
    return 0;
}