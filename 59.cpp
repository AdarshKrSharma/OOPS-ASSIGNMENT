#include <iostream>
#include <string>

class Player {
private:
    // Const data members
    const int id;
    const std::string role;

public:
    // Constructor using a Member Initializer List
    Player(int p_id, std::string p_role) 
        : id(p_id), role(p_role) // <--- This is the initialization
    {
        // id = p_id; // ERROR: Cannot assign to a const member here
        std::cout << "Player object created." << std::endl;
    }

    void display() const {
        std::cout << "ID: " << id << " | Role: " << role << std::endl;
    }
};

int main() {
    Player p1(101, "Archer");
    p1.display();

    return 0;
}