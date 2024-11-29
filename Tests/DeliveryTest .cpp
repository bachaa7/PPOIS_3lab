#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Delivery.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Order.h>



TEST(DeliveryTest, ConstructorAndGetters) {
    Order order(1);
    Delivery delivery(1, "123 Elm St", "2024-12-25 12:00", order);

    EXPECT_EQ(delivery.getId(), 1);
    EXPECT_EQ(delivery.getAddress(), "123 Elm St");
    EXPECT_EQ(delivery.getDeliveryTime(), "2024-12-25 12:00");
    EXPECT_FALSE(delivery.getDeliveryStatus());
}

TEST(DeliveryTest, MarkAsDelivered) {
    Order order(2);
    Delivery delivery(2, "456 Oak St", "2024-12-25 14:00", order);

    delivery.markAsDelivered();
    EXPECT_TRUE(delivery.getDeliveryStatus());
}

TEST(DeliveryTest, DisplayDeliveryInfo) {
    Order order(3);
    Delivery delivery(3, "789 Pine St", "2024-12-25 16:00", order);

    testing::internal::CaptureStdout();
    delivery.displayDeliveryInfo();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Delivery ID: 3") != std::string::npos);
    EXPECT_TRUE(output.find("Address: 789 Pine St") != std::string::npos);
    EXPECT_TRUE(output.find("Time: 2024-12-25 16:00") != std::string::npos);
    EXPECT_TRUE(output.find("Status: Pending") != std::string::npos);
}
