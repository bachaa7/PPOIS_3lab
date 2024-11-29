#pragma once


#include "Library.h"

class Music {
private:
    string currentTrack;

public:
    void play(const string& track);
    void stop();
};


