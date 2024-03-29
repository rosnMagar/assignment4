// # Author: Roshan Thapa Magar
// # BannerID: 001396747     
// # Course: CS 181
// # Assignment: PA 4
// # Date Assigned: Monday, March 18, 2024 
// # Date/Time Due: Saturday, March 30, 2024
// # Description: This program will exercise ObjectOriented concepts with C++.
// # Certification of Authenticity: I certify that this assignment is entirely my own work.

#include"Manager.h"
#include<iomanip>
#include<array>

using namespace std;

int main(){

    int numberOfManagers;
    int highestPaidManager = 0;
    double highestAmount = 0.0;
    double totalWage = 0.0;

    cout << "Enter the number of managers: ";
    cin >> numberOfManagers;

    Manager* allManagers[numberOfManagers];

    for(int i = 0; i < numberOfManagers; i++) {
        char name[100]; 
        double hourlyWage = 0.0;
        double hoursWorked = 0.0;
        double bonus = 0.0;

        cin.ignore();
        cout << "Enter manager " << i << " name: ";
        cin.getline(name, 100);

        cout << "Enter manager " << i << " hourly wage: ";
        cin >> hourlyWage;

        cout << "Enter manager " << i << " hours worked: ";
        cin >> hoursWorked;

        cout << "Enter manager " << i << " bonus: ";
        cin >> bonus;
        cout << endl;

        if((hoursWorked * hourlyWage + bonus) > highestAmount){
            highestPaidManager = i;
            highestAmount = hoursWorked * hourlyWage + bonus;
        }

        totalWage += hoursWorked * hourlyWage + bonus;

        Manager* manager = new Manager(name, hourlyWage, hoursWorked);
        allManagers[i] = manager; 
    }


    cout << "Highest paid manager is " << allManagers[highestPaidManager]->getName() << " who is paid $" << fixed << 
        setprecision(2) << highestAmount << endl;
    cout << "Average pay is $" << setprecision(2) << fixed << totalWage / numberOfManagers; 
    cout << endl;

    return 0;
}