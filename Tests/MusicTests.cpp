#include "pch.h"
#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Music.cpp>




TEST(MusicTest, PlayTest) {
    Music music;

    testing::internal::CaptureStdout();

    music.play("Track1");

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Playing music track: Track1"), std::string::npos);
}

TEST(MusicTest, StopTest) {
    Music music;

    music.play("Track1");

    testing::internal::CaptureStdout();

    music.stop();

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Stopping music: Track1"), std::string::npos);
}
