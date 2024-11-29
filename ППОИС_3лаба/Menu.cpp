#include "Menu.h"

void Menu::addItem(const MenuItem& item) {
    items.push_back(item);
}

void Menu::removeItem(const string& name) {
    items.erase(
       remove_if(items.begin(), items.end(),
            [&name](const MenuItem& item) { return item.getName() == name; }),
        items.end());
}

void Menu::displayMenu() const {
        cout << "Menu:\n";
    for (const auto& item : items) {
        cout << "- " << item.getDetails() << "\n";
    }
}

MenuItem* Menu::findItemByName(const string& name) {
    for (auto& item : items) {
        if (item.getName() == name) {
            return &item;
        }
    }
    return nullptr;
}
