#include "Manager.h"

Manager::Manager(int id, const string& name, double salary, const string& speciality)
    : Employee(id, name, salary,speciality) {}

void Manager::handleCustomerComplaint(const string& complaint) {
    cout << "Manager " << name << " is handling complaint: " << complaint << ".\n";
}

void Manager::displayRole() const {
    cout << "Name: " << name << " Speciality: " << speciality << endl;
}