#include "MenuItem.h"

MenuItem::MenuItem(const std::string& name, const std::string& description, double price, bool isAvailable)
    : name(name), description(description), price(price), isAvailable(isAvailable) {}

string MenuItem::getDetails() const {
    return name + ": " + description + " - $" + std::to_string(price) +
        (isAvailable ? " (Available)" : " (Unavailable)");
}

void MenuItem::updateAvailability(bool availability) {
    isAvailable = availability;
}

string MenuItem::getName() const {
    return name;
}
