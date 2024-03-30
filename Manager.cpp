#include "Manager.h"

double Manager::calcPay() const{
    return Employee::calcPay() + bonus;
}
