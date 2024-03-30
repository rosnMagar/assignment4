#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"

class Manager: public Employee {
    private:
        double bonus;
    public:
        Manager(string theName, double theWage, double theHours, double _bonus) : Employee(theName, theWage, theHours), bonus(_bonus){}
        double calcPay() const;
};

#endif