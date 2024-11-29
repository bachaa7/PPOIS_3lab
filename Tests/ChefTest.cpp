#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Chef.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Employee.cpp>


TEST(ChefTest, GetSpecialityTest) {
    Chef chef(1, "John Doe", 5000.0, "Italian Cuisine");

    EXPECT_EQ(chef.getSpeciality(), "Italian Cuisine");
}

TEST(ChefTest, DisplayRoleTest) {
    Chef chef(1, "John Doe", 5000.0, "Italian Cuisine");

    testing::internal::CaptureStdout();
    chef.displayRole();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Chef: John Doe"), std::string::npos);
    EXPECT_NE(output.find("speciality: Italian Cuisine"), std::string::npos);
}

