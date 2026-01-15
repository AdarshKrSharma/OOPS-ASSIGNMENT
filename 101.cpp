#include <iostream>

class MediaPlayer {
public:
    // Virtual keyword enables Late Binding
    virtual void play() {
        std::cout << "Playing generic media..." << std::endl;
    }

    // Virtual destructor is important for cleanup
    virtual ~MediaPlayer() {}
};

class AudioPlayer : public MediaPlayer {
public:
    void play() override {
        std::cout << "Playing Audio (MP3/WAV)..." << std::endl;
    }
};

class VideoPlayer : public MediaPlayer {
public:
    void play() override {
        std::cout << "Playing Video (MP4/MKV)..." << std::endl;
    }
};

int main() {
    MediaPlayer* player; // Base class pointer
    int choice;

    std::cout << "Select Player (1 for Audio, 2 for Video): ";
    std::cin >> choice;

    // The decision of which object to create happens at RUNTIME
    if (choice == 1)
        player = new AudioPlayer();
    else
        player = new VideoPlayer();

    // LATE BINDING: The compiler doesn't know which 'play' is called here.
    // It is decided during execution based on the object type.
    player->play();

    delete player; // Clean up memory
    return 0;
}