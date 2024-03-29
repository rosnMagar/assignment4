#include "Manager.h"

void Manager::setBonus(double b){
    bonus = b;
}
double Manager::calcPay() const{
    return Employee::calcPay() + bonus;
}
