#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Reservation.h>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Reservation.cpp>

#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Table.h>


TEST(ReservationTest, Getters) {
    Table table(5, 4); 
    Reservation reservation(1, "Alice Johnson", &table, "2024-11-30", "19:00");

    EXPECT_EQ(reservation.getId(), 1);
    EXPECT_EQ(reservation.getCustomerName(), "Alice Johnson");
    EXPECT_EQ(reservation.getReservedTable()->getId(), 5);
}

TEST(ReservationTest, Display) {
    Table table(10, 6); 
    Reservation reservation(2, "Bob Smith", &table, "2024-12-01", "20:30");

    testing::internal::CaptureStdout();
    reservation.display();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Reservation ID: 2") != std::string::npos);
    EXPECT_TRUE(output.find("Customer: Bob Smith") != std::string::npos);
    EXPECT_TRUE(output.find("Table ID: 10") != std::string::npos);
    EXPECT_TRUE(output.find("Date: 2024-12-01") != std::string::npos);
    EXPECT_TRUE(output.find("Time: 20:30") != std::string::npos);
}

