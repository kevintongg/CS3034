//
// Created by Kevin Tong on 4/10/2017.
//

#include <iostream>
#include "employee.h"

using namespace std;

Employee::Employee(string employeeId, string firstName, string lastName, double wage, int hours)
    : employeeId(move(employeeId)),
      firstName(move(firstName)),
      lastName(move(lastName)),
      wage(wage),
      hours(hours) {}

double Employee::calcPay(double wage, int hours) {
  
  double totalPay = wage * hours;
  
  return totalPay;
}
