//
// Created by Kevin Tong on 4/10/2017.
//

#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>

using namespace std;

class Employee {

public:
  Employee(string employeeId, string firstName, string lastName, double wage, int hours);

  double calcPay(double wage, int hours);

private:
  string employeeId;
  string firstName;
  string lastName;
  double wage;
  int hours;
};


#endif // EMPLOYEE
