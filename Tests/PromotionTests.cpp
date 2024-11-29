#include "pch.h"
#include </�����/�����/����/�����_3����/�����_3����/Promotion.cpp>


TEST(PromotionTest, ApplyPromoCode) {
    Promotion promo;
    promo.applyPromoCode("SAVE10");

    EXPECT_EQ(promo.getDiscountPercentage(), 10.0);

    promo.applyPromoCode("SAVE20");

    EXPECT_EQ(promo.getDiscountPercentage(), 20.0);

    promo.applyPromoCode("INVALIDCODE");

    EXPECT_EQ(promo.getDiscountPercentage(), 0.0);
}

TEST(PromotionTest, DisplayPromotion) {
    Promotion promo;
    promo.applyPromoCode("SAVE10");

    testing::internal::CaptureStdout();
    promo.displayPromotion();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Promotion Code: SAVE10") != std::string::npos);
}
