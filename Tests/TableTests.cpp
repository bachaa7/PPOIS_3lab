#include "pch.h"
#include </�����/�����/����/�����_3����/�����_3����/Table.cpp>

TEST(TableTest, TableOccupation) {
    Table table(1, 4);

    EXPECT_FALSE(table.getOccupiedStatus());

    table.occupy();
    EXPECT_TRUE(table.getOccupiedStatus());

    table.release();
    EXPECT_FALSE(table.getOccupiedStatus());
}

TEST(TableTest, TableDetails) {
    Table table(2, 6);

    EXPECT_EQ(table.getId(), 2);
    EXPECT_EQ(table.getCapacity(), 6);
}
