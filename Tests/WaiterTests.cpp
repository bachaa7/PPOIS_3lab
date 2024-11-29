#include "pch.h"
#include </�����/�����/����/�����_3����/�����_3����/Waiter.cpp>
#include </�����/�����/����/�����_3����/�����_3����/Manager.cpp>


TEST(WaiterTest, ServeOrder) {
    Waiter waiter(1, "John Doe", 2000.0, "Italian Cuisine");

    testing::internal::CaptureStdout();
    waiter.serveOrder(101);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Serving order with ID: 101") != std::string::npos);
}

TEST(WaiterTest, ReportComplaint) {
    Manager manager(1, "Manager", 5000.0, "General Manager");
    Waiter waiter(2, "Waiter", 1500.0, "Serving");

    testing::internal::CaptureStdout();
    waiter.reportComplaint("The customer is unhappy", manager);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("The customer is unhappy") != std::string::npos);
}
