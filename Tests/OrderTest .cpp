#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Order.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Order.h>

#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/MenuItem.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/MenuItem.h>


TEST(OrderTest, AddItemAndCalculateTotal) {
    MenuItem item("Salad", "Fresh green salad", 8.99);
    Order order(1);

    order.addItem(item, 8.99);
    EXPECT_EQ(order.calculateTotal(), 8.99);
}

TEST(OrderTest, DisplayOrder) {
    MenuItem item("Steak", "Grilled steak", 25.99);
    Order order(2);

    order.addItem(item, 25.99);

    testing::internal::CaptureStdout();
    order.displayOrder();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Order ID: 2") != std::string::npos);
    EXPECT_TRUE(output.find("Steak") != std::string::npos);
    EXPECT_TRUE(output.find("Total Amount: $25.99") != std::string::npos);
}
