#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    double price;

public:
    // Parameterized Constructor
    Book(string t, double p) {
        title = t;
        price = p;
        cout << "Object initialized with specific values." << endl;
    }

    void display() {
        cout << "Title: " << title << " | Price: $" << price << endl;
    }
};

int main() {
    // Passing arguments to the constructor during object creation
    Book b1("The Great Gatsby", 15.99);
    Book b2("1984", 12.50);

    cout << "\n--- Library Inventory ---" << endl;
    b1.display();
    b2.display();

    return 0;
}