#include "Review.h"


Review::Review(int id, const string& customerName, const string& reviewText, int rating)
    : reviewId(id), customerName(customerName), reviewText(reviewText), rating(rating) {}

int Review::getId() const {
    return reviewId;
}

string Review::getCustomerName() const {
    return customerName;
}

string Review::getReviewText() const {
    return reviewText;
}

int Review::getRating() const {
    return rating;
}

void Review::displayReview() const {
    cout << "Review ID: " << reviewId << "\n"
        << "Customer: " << customerName << "\n"
        << "Rating: " << rating << "/5\n"
        << "Review: " << reviewText << "\n";
}
