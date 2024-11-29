#include "Table.h"


Table::Table(int tableId, int capacity)
    : tableId(tableId), capacity(capacity), isOccupied(false) {}

int Table::getId() const {
    return tableId;
}

int Table::getCapacity() const {
    return capacity;
}

bool Table::getOccupiedStatus() const {
    return isOccupied;
}

void Table::occupy() {
    isOccupied = true;
}

void Table::release() {
    isOccupied = false;
}
