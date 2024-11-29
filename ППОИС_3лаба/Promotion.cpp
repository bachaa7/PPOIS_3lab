#include "Promotion.h"

Promotion::Promotion() : promoCode(""), discountPercentage(0.0) {}

void Promotion::applyPromoCode(const string& code) {
    promoCode = code;
    if (code == "SAVE10") {
        discountPercentage = 10.0;
    }
    else if (code == "SAVE20") {
        discountPercentage = 20.0;
    }
    else {
        discountPercentage = 0.0;
    }
}

double Promotion::getDiscountPercentage() const {
    return discountPercentage;
}

void Promotion::displayPromotion() const {
    cout << "Promotion Code: " << promoCode << "\n"
        << "Discount: " << discountPercentage << "%\n";
}
