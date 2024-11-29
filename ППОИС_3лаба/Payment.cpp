#include "Payment.h"


Payment::Payment(int id, const string& customerName, double amount, const string& method)
    : paymentId(id), customerName(customerName), amount(amount), paymentMethod(method), isProcessed(false) {}

int Payment::getId() const {
    return paymentId;
}

double Payment::getAmount() const {
    return amount;
}

string Payment::getMethod() const {
    return paymentMethod;
}

bool Payment::getProcessedStatus() const {
    return isProcessed;
}

void Payment::processPayment() {
    isProcessed = true;
    cout << "Payment ID: " << paymentId << " has been processed.\n";
}

void Payment::displayPaymentInfo() const {
    cout << "Payment ID: " << paymentId << "\n"
        << "Customer: " << customerName << "\n"
        << "Amount: $" << amount << "\n"
        << "Method: " << paymentMethod << "\n"
        << "Processed: " << (isProcessed ? "Yes" : "No") << "\n";
}
