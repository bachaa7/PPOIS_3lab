#include "Music.h"


void Music::play(const string& track) {
    currentTrack = track;
    cout << "Playing music track: " << currentTrack << "\n";
}

void Music::stop() {
    cout << "Stopping music: " << currentTrack << "\n";
    currentTrack = "";
}
