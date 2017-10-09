//
// Created by Kevin Tong on 4/10/2017.
//

#ifndef PAYROLLSYSTEM
#define PAYROLLSYSTEM


#include <vector>
#include "employee.h"

class PayrollSystem {

public:
  void addEmployee(string employeeID, string firstName, string lastName, double wage, int hours);

  void findAndErase(string id);

  void issuePaycheck(string id);

  vector<Employee> employees;

};

#endif // PAYROLLSYSTEM
