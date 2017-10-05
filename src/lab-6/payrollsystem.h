//
// Created by Kevin Tong on 4/10/2017.
//

#ifndef PAYROLLSYSTEM
#define PAYROLLSYSTEM


#include <vector>
#include "employee.h"

class PayrollSystem {

public:
  void addEmployee(string firstName, string lastName, double wage, int hours);
  
  void findAndErase();
  
  vector<Employee> employees;
  
};


#endif // PAYROLLSYSTEM
