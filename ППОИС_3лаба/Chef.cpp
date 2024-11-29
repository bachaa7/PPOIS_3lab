#include "Chef.h"

Chef::Chef(int id, const std::string& name, double salary, const std::string& specialty)
	:Employee(id, name, salary, specialty){}

void Chef::displayRole() const {

	cout << "Chef: " << name << "speciality: " << speciality << endl;

}


string  Chef::getSpeciality() const {

	return speciality;

}