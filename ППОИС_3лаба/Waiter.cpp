#include "Waiter.h"


Waiter::Waiter(int id, const string& name, double salary, const string& speciality):
	Employee(id,name,salary,speciality) {}


void Waiter::displayRole() const {

	cout << "Name: " << name << "Speciality" <<  speciality << endl;

}


void Waiter::serveOrder(int orderId) {

	
	cout << "Serving order with ID: " << orderId << endl;


}

void Waiter::reportComplaint(const std::string& complaint, Manager& manager) {
	manager.handleCustomerComplaint(complaint); 
}