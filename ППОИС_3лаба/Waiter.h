#ifndef WAITER_H
#define WAITER_H

#include "Library.h"
#include "Employee.h"
#include "Manager.h"

class Waiter: public Employee
{

public:

    Waiter(int id, const string& name, double salary, const string& speciality);

    void serveOrder(int orderId);
    
    void displayRole() const override;

    void reportComplaint(const string& complaint, Manager& manager);

};



#endif  WAITER_H