//
// Created by Kevin Tong on 4/10/2017.
//

#include <iostream>
#include <unistd.h>
#include "payrollsystem.h"

using namespace std;

int main() {

  PayrollSystem payrollSystem;

  /**
   * Adding at least four employees
   **/
  cout << "Adding four employees..." << endl;
  payrollSystem.addEmployee("E0001", "Mary", "Smith", 21.34, 0);
  payrollSystem.addEmployee("E0002", "Jerry", "Jones", 17.27, 0);
  payrollSystem.addEmployee("E0003", "John", "Doe", 24.71, 0);
  payrollSystem.addEmployee("E0004", "Jane", "Doe", 25.46, 0);
  cout << endl;
  sleep(2);

  /**
   * Recording Hours
   **/
  cout << "Recording hours..." << endl;
  payrollSystem.recordHours("E0001", 24);
  payrollSystem.recordHours("E0002", 20);
  payrollSystem.recordHours("E0003", 36);
  payrollSystem.recordHours("E0004", 32);
  cout << endl;
  sleep(2);

  /**
   * Issuing paychecks
   **/
  cout << "Issuing paychecks..." << endl;
  sleep(2);
  cout << endl;
  cout << "Payroll for Ace Peat Moss Inc.:" << endl;
  payrollSystem.issuePaycheck();
  cout << endl;
  sleep(1);

  /**
   * Deleting an employee
   **/
  cout << "Deleting an employee..." << endl;
  payrollSystem.findAndErase("E0002");
  sleep(2);
  cout << "Employee deleted." << endl;
  cout << endl;
  sleep(1);

  /**
   * Recording new hours
   **/
  cout << "Recording new hours..." << endl;
  payrollSystem.recordHours("E0001", 32);
  payrollSystem.recordHours("E0003", 40);
  payrollSystem.recordHours("E0004", 38);
  cout << endl;
  sleep(2);

  /**
   * Issuing new paychecks
   **/
  cout << "Issuing new paychecks..." << endl;
  sleep(2);
  cout << endl;
  cout << "Payroll for Ace Peat Moss Inc.:" << endl;
  payrollSystem.issuePaycheck();
}
