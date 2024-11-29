#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Menu.cpp>
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/MenuItem.h>


TEST(MenuTest, AddItemAndRemoveItem) {
    Menu menu;
    MenuItem item("Pizza", "Delicious cheese pizza", 12.99);

    menu.addItem(item);
    EXPECT_EQ(menu.findItemByName("Pizza")->getName(), "Pizza");

    menu.removeItem("Pizza");
    EXPECT_EQ(menu.findItemByName("Pizza"), nullptr);
}

TEST(MenuTest, DisplayMenu) {
    Menu menu;
    MenuItem item("Burger", "Juicy beef burger", 9.99);
    menu.addItem(item);

    testing::internal::CaptureStdout();
    menu.displayMenu();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Menu:") != std::string::npos);
    EXPECT_TRUE(output.find("Burger") != std::string::npos);
}
