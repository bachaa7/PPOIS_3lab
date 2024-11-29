#include "Employee.h"




Employee::Employee(int id, const string& name, double salary, const string& speciality):
	id(id), name(name),salary(salary), speciality(speciality){}


int  Employee::getId() const {
	return id;
}


string Employee::getName() const {
	return name;
}

double Employee::getSalary() const {
	return salary;
}

string Employee::getSpeciality() const {
	return speciality;
}
