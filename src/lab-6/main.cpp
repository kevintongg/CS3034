//
// Created by Kevin Tong on 4/10/2017.
//

#include <iostream>
#include "payrollsystem.h"
#include "paycheck.h"

using namespace std;

int main() {

  PayrollSystem payrollSystem;
  Paycheck paycheck;

  cout << "Payroll for Ace Peat Moss Inc.:" << endl;
  payrollSystem.addEmployee("E0001", "Mary", "Smith", 21, 40);
  payrollSystem.addEmployee("E0002", "Jerry", "Jones", 17, 40);
  payrollSystem.addEmployee("E0003", "John", "Doe", 24, 40);
  payrollSystem.addEmployee("E0004", "Jane", "Doe", 25, 40);

  payrollSystem.findAndErase("E0002");

  for (const Employee &i : payrollSystem.employees) {
//    paycheck.getPaycheck(i.getEmployeeId(), i.getFirstName(), i.getLastName(), paycheck.getPaycheckAmount());
    payrollSystem.issuePaycheck(i.getEmployeeId());
    cout << "test" << endl;
  }
}
