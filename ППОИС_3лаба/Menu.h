#ifndef MENU_H
#define MENU_H

#include "Library.h"
#include "MenuItem.h"


class Menu {
private:
    vector<MenuItem> items;

public:
    void addItem(const MenuItem& item);

    void removeItem(const string& name);

    void displayMenu() const;

    MenuItem* findItemByName(const string& name);
};

#endif  MENU_H
