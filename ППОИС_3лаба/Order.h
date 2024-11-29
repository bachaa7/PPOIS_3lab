#pragma once

#include "Library.h"
#include "MenuItem.h"


class Order {
private:
    int orderId;
   vector<MenuItem> items;
    double totalAmount;

public:
    Order(int orderId);

    void addItem(const MenuItem& item, double price);

    double calculateTotal() const;

    int getId() const;

    void displayOrder() const;
};
