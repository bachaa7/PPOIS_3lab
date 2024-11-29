#pragma once

#include "Library.h"


class Table {
private:
    int tableId;
    int capacity;
    bool isOccupied;

public:
    Table(int tableId, int capacity);
    int getId() const;
    int getCapacity() const;
    bool getOccupiedStatus() const;
    void occupy();
    void release();
};


