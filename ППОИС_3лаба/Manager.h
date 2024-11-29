#ifndef MANAGER_H
#define MANAGER_H

#include "Library.h"
#include "Employee.h"


class Manager: Employee
{

public:

	Manager(int id, const string& name, double salary, const string& speciality);

	void displayRole() const override; 

	void handleCustomerComplaint(const string& complaint);


};

#endif MANAGER_H