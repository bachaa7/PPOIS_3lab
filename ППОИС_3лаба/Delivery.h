#pragma once


#include "Library.h"
#include "Order.h"

class Delivery {
private:
    int deliveryId;
    string customerAddress;
    string deliveryTime;
    Order order;
    bool isDelivered;

public:
    Delivery(int id, const string& address, const string& time, const Order& order);
    int getId() const;
    string getAddress() const;
    string getDeliveryTime() const;
    bool getDeliveryStatus() const;
    void markAsDelivered();
    void displayDeliveryInfo() const;
};


