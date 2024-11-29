#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Restaraunt.cpp>


TEST(RestarauntTest, Constructor) {
    Restaraunt restaurant("123 Main St", "Gourmet Bistro", "123-456-7890");

    EXPECT_NO_THROW(Restaraunt("123 Main St", "Gourmet Bistro", "123-456-7890"));
}
