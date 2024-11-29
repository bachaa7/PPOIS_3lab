#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include"Library.h"

class Employee
{
protected:
	string name;
	int id;
	double salary;
	string speciality;


public:

	Employee(int id, const string& name, double salary, const string& speciality);


	int getId() const ;
	string getName() const ;
	double getSalary() const ;
	string getSpeciality() const;

	virtual void displayRole() const = 0;
};

#endif  EMPLOYEE_H