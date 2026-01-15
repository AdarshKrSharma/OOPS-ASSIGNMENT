#include <iostream>

class TV {
private:
    int volume;
    int channel;

public:
    TV() : volume(15), channel(1) {}

    // Declare Remote as a Friend Class
    friend class Remote; 

    void displayState() {
        std::cout << "TV Settings -> Channel: " << channel 
                  << " | Volume: " << volume << std::endl;
    }
};

class Remote {
public:
    // This function can access private members of TV directly
    void setChannel(TV& t, int ch) {
        t.channel = ch; 
    }

    void volumeUp(TV& t) {
        t.volume++;
    }

    void volumeDown(TV& t) {
        t.volume--;
    }
};

int main() {
    TV myTv;
    Remote myRemote;

    myTv.displayState();

    // Remote modifies TV's private data
    myRemote.setChannel(myTv, 101);
    myRemote.volumeUp(myTv);

    myTv.displayState();

    return 0;
}