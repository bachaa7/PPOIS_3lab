#include "pch.h"
#include </�����/�����/����/�����_3����/�����_3����/Chef.cpp>
#include </�����/�����/����/�����_3����/�����_3����/Employee.cpp>


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

