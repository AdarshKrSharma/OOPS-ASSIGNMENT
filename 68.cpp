#include <iostream>
#include <string>

// 1. Forward Declaration
class Arts; 

class Science {
private:
    std::string name;
    int marks;

public:
    Science(std::string n, int m) : name(n), marks(m) {}

    // 2. Declare the common friend function
    friend void compareMarks(Science s, Arts a);
};

class Arts {
private:
    std::string name;
    int marks;

public:
    Arts(std::string n, int m) : name(n), marks(m) {}

    // 3. Declare the same common friend function
    friend void compareMarks(Science s, Arts a);
};

// 4. Define the friend function (can access private 'marks' of both)
void compareMarks(Science s, Arts a) {
    std::cout << "Comparing " << s.name << " (Science) and " 
              << a.name << " (Arts)..." << std::endl;

    if (s.marks > a.marks) {
        std::cout << s.name << " has higher marks (" << s.marks << ")." << std::endl;
    } else if (a.marks > s.marks) {
        std::cout << a.name << " has higher marks (" << a.marks << ")." << std::endl;
    } else {
        std::cout << "Both have equal marks." << std::endl;
    }
}

int main() {
    Science student1("Rahul", 88);
    Arts student2("Sneha", 92);

    // Call the friend function like a regular global function
    compareMarks(student1, student2);

    return 0;
}