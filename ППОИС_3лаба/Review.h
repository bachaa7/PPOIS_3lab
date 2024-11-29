#pragma once

#include "Library.h"

class Review {
private:
    int reviewId;
    string customerName;
    string reviewText;
    int rating; 

public:
    Review(int id, const string& customerName, const string& reviewText, int rating);
    int getId() const;
    string getCustomerName() const;
    string getReviewText() const;
    int getRating() const;
    void displayReview() const;
};


