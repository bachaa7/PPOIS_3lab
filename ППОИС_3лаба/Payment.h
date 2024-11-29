#pragma once


#include "Library.h"

class Payment {
private:
    int paymentId;
    string customerName;
    double amount;
    string paymentMethod; 
    bool isProcessed;

public:
    Payment(int id, const string& customerName, double amount, const string& method);
    int getId() const;
    double getAmount() const;
    string getMethod() const;
    bool getProcessedStatus() const;
    void processPayment();
    void displayPaymentInfo() const;
};

