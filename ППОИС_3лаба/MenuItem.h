#ifndef MENUITEM_H
#define MENUITEM_H

#include "Library.h"



class MenuItem {
private:
    std::string name;
    std::string description;
    double price;
    bool isAvailable;

public:
    MenuItem(const string& name, const string& description, double price, bool isAvailable = true);

    string getDetails() const;

    void updateAvailability(bool availability);

    string getName() const;
};



#endif / MENUITEM_H

