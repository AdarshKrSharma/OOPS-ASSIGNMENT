#include <iostream>

class Rectangle {
private:
    int width;  // Member variable
    int height; // Member variable

public:
    // Local variables (parameters) have the same names
    Rectangle(int width, int height) {
        // width = width; // Error: This would assign the parameter to itself
        
        this->width = width;   // this->width refers to the member
        this->height = height; // height refers to the local parameter
    }

    void updateDimensions(int width) {
        // Differentiating inside a regular method
        std::cout << "Updating width from " << this->width << " to " << width << std::endl;
        this->width = width;
    }

    void display() {
        std::cout << "Dimensions: " << this->width << "x" << this->height << std::endl;
    }
};

int main() {
    Rectangle rect(10, 20);
    rect.display();
    
    rect.updateDimensions(50);
    rect.display();

    return 0;
}