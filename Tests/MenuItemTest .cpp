#include "pch.h"
#include </�����/�����/����/�����_3����/�����_3����/MenuItem.h>




TEST(MenuItemTest, UpdateAvailability) {
    MenuItem item("Pasta", "Delicious pasta",10.9900);

    item.updateAvailability(false);
    EXPECT_EQ(item.getDetails(), "Pasta: Delicious pasta - $10.990000 (Unavailable)");
}
