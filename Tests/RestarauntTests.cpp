#include "pch.h"
#include </�����/�����/����/�����_3����/�����_3����/Restaraunt.cpp>


TEST(RestarauntTest, Constructor) {
    Restaraunt restaurant("123 Main St", "Gourmet Bistro", "123-456-7890");

    EXPECT_NO_THROW(Restaraunt("123 Main St", "Gourmet Bistro", "123-456-7890"));
}
