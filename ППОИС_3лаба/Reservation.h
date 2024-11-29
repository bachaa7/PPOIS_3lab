#pragma once


#include "Library.h"
#include "Table.h"

class Reservation {
private:
    int reservationId;
    string customerName;
    Table* reservedTable;
    string date;
    string time;

public:
    Reservation(int id, const string& customerName, Table* table, const string& date, const string& time);
    int getId() const;
    string getCustomerName() const;
    Table* getReservedTable() const;
    void display() const;
};


