#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/MenuItem.h>




TEST(MenuItemTest, UpdateAvailability) {
    MenuItem item("Pasta", "Delicious pasta",10.9900);

    item.updateAvailability(false);
    EXPECT_EQ(item.getDetails(), "Pasta: Delicious pasta - $10.990000 (Unavailable)");
}
