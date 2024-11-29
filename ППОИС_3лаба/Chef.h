#ifndef CHEF_H
#define CHEF_H



#include "Library.h"
#include "Employee.h"


class Chef: public Employee
{
public:

	Chef(int id, const std::string& name, double salary, const std::string& specialty);
	string getSpeciality() const;

	void displayRole() const override;
};

#endif  CHEF_H