#include "Order.h"

Order::Order(int orderId) : orderId(orderId), totalAmount(0.0) {}

void Order::addItem(const MenuItem& item, double price) {
    items.push_back(item);    
    totalAmount += price;     
}

double Order::calculateTotal() const {
    return totalAmount;      
}

int Order::getId() const {
    return orderId;
}

void Order::displayOrder() const {
   cout << "Order ID: " << orderId << "\nItems:\n";
    for (const auto& item : items) {
        cout << "- " << item.getName() << "\n"; 
    }
    cout << "Total Amount: $" << totalAmount << "\n";
}