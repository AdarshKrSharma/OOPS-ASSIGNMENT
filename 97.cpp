#include <iostream>

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    // Syntax: ReturnType operator OperatorSymbol (ParameterList)
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real; // 'real' refers to the calling object (c1)
        temp.imag = imag + obj.imag; // 'obj.real' refers to the passed object (c2)
        return temp;
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.2, 4.3);

    // Using the overloaded + operator
    Complex c3 = c1 + c2; 

    std::cout << "First Complex Number: "; c1.display();
    std::cout << "Second Complex Number: "; c2.display();
    std::cout << "Sum: "; c3.display();

    return 0;
}