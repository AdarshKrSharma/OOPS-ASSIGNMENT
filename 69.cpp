#include <iostream>
#include <string>

class Person {
private:
    std::string secret = "I like pineapple on pizza.";

public:
    // Person grants friendship to Stalker
    friend class Stalker; 
};

class Stalker {
private:
    std::string identity = "John Doe";

public:
    // This works because Stalker is a friend of Person
    void revealSecret(Person& p) {
        std::cout << "Stalker sees Person's secret: " << p.secret << std::endl;
    }

    // This WOULD FAIL if Person tried to do it
    void showMyIdentity() {
        std::cout << "My identity is: " << identity << std::endl;
    }
    
    /* void tryToAccessStalker(Person& p, Stalker& s) {
        // If this function were inside the Person class, 
        // it would cause a COMPILER ERROR:
        // std::cout << s.identity; 
    }
    */
};

int main() {
    Person myPerson;
    Stalker myStalker;

    // Stalker accesses Person's private data (Allowed)
    myStalker.revealSecret(myPerson);

    std::cout << "\nNote: The Person class cannot access myStalker.identity "
              << "because friendship is not mutual." << std::endl;

    return 0;
}