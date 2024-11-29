#include "pch.h"
#include </Ó÷åáà/ÏÏÎÈÑ/Ëàáû/ÏÏÎÈÑ_3ëàáà/ÏÏÎÈÑ_3ëàáà/Review.cpp>

TEST(ReviewTest, ReviewDetails) {
    Review review(1, "John Doe", "Great service and food!", 5);

    EXPECT_EQ(review.getId(), 1);
    EXPECT_EQ(review.getCustomerName(), "John Doe");
    EXPECT_EQ(review.getRating(), 5);
    EXPECT_EQ(review.getReviewText(), "Great service and food!");
}

TEST(ReviewTest, DisplayReview) {
    Review review(2, "Alice Smith", "Not bad, but could be better.", 3);

    testing::internal::CaptureStdout();
    review.displayReview();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.find("Review ID: 2") != std::string::npos);
    EXPECT_TRUE(output.find("Customer: Alice Smith") != std::string::npos);
    EXPECT_TRUE(output.find("Rating: 3/5") != std::string::npos);
    EXPECT_TRUE(output.find("Review: Not bad, but could be better.") != std::string::npos);
}
