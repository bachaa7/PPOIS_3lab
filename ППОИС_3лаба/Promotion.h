#pragma once



#include "Library.h"

class Promotion {
private:
    string promoCode;
    double discountPercentage;

public:
    Promotion();
    void applyPromoCode(const string& code);
    double getDiscountPercentage() const;
    void displayPromotion() const;
};



