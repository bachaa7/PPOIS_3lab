#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Manager.h>





TEST(ManagerTest, HandleCustomerComplaint) {
    testing::internal::CaptureStdout();

    Manager manager(1, "John Doe", 6000.0, "Operations Manager");

    std::string complaint = "Food delivery was late!";
    manager.handleCustomerComplaint(complaint);

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Manager John Doe is handling complaint: Food delivery was late!") != std::string::npos);
}

TEST(ManagerTest, DisplayRole) {
    testing::internal::CaptureStdout();

    Manager manager(1, "John Doe", 6000.0, "Operations Manager");

    manager.displayRole();

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "Name: John Doe Speciality: Operations Manager\n");
}

