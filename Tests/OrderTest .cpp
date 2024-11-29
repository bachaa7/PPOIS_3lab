#include "pch.h"
#include </�����/�����/����/�����_3����/�����_3����/Order.cpp>
#include </�����/�����/����/�����_3����/�����_3����/Order.h>

#include </�����/�����/����/�����_3����/�����_3����/MenuItem.cpp>
#include </�����/�����/����/�����_3����/�����_3����/MenuItem.h>


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
