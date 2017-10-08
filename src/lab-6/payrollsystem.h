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
  
  void findAndErase(string id);
  
  const vector<Employee> &getEmployees() const;
  
  void setEmployees(const vector<Employee> &employees);
  
  vector<Employee> employees;
  
};

const vector<Employee> &PayrollSystem::getEmployees() const {
  return employees;
}

void PayrollSystem::setEmployees(const vector<Employee> &employees) {
  PayrollSystem::employees = employees;
}

#endif // PAYROLLSYSTEM
