#include "Delivery.h"


Delivery::Delivery(int id, const string& address, const string& time, const Order& order)
    : deliveryId(id), customerAddress(address), deliveryTime(time), order(order), isDelivered(false) {}

int Delivery::getId() const {
    return deliveryId;
}

string Delivery::getAddress() const {
    return customerAddress;
}

string Delivery::getDeliveryTime() const {
    return deliveryTime;
}

bool Delivery::getDeliveryStatus() const {
    return isDelivered;
}

void Delivery::markAsDelivered() {
    isDelivered = true;
    cout << "Delivery ID: " << deliveryId << " has been marked as delivered.\n";
}

void Delivery::displayDeliveryInfo() const {
    cout << "Delivery ID: " << deliveryId << "\n"
        << "Address: " << customerAddress << "\n"
        << "Time: " << deliveryTime << "\n"
        << "Status: " << (isDelivered ? "Delivered" : "Pending") << "\n";
}
