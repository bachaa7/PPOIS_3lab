#include "Reservation.h"

Reservation::Reservation(int id, const std::string& customerName, Table* table, const std::string& date, const std::string& time)
    : reservationId(id), customerName(customerName), reservedTable(table), date(date), time(time) {}

int Reservation::getId() const {
    return reservationId;
}

std::string Reservation::getCustomerName() const {
    return customerName;
}

Table* Reservation::getReservedTable() const {
    return reservedTable;
}

void Reservation::display() const {
    std::cout << "Reservation ID: " << reservationId << "\n"
        << "Customer: " << customerName << "\n"
        << "Table ID: " << reservedTable->getId() << "\n"
        << "Date: " << date << "\n"
        << "Time: " << time << "\n";
}
#include "Reservation.h"
