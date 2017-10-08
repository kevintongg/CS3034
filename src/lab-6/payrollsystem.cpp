//
// Created by Kevin Tong on 4/10/2017.
//

#include <iostream>
#include "payrollsystem.h"

using namespace std;

void PayrollSystem::addEmployee(string firstName, string lastName, double wage, int hours) {
  
  int id = 0001;
  string fullId = "E" + to_string(id);
  
  cout << "What is the employee's first name?" << endl;
  cin >> firstName;
  cout << "What is the employee's last name?" << endl;
  cin >> lastName;
  cout << "How much does this employee make per hour?" << endl;
  cin >> wage;
  cout << "How many hours has this employee worked?" << endl;
  cin >> hours;
  
  Employee newEmployee(fullId, firstName, lastName, wage, hours);
  
  PayrollSystem::employees.push_back(newEmployee);
}

void PayrollSystem::findAndErase(string id) {
  
  Employee employee(NULL, NULL, NULL, NULL, NULL);
  
//  for (PayrollSystem i : PayrollSystem::employees) {
//    if (id == Employee::getEmployeeId()) {
//      PayrollSystem::employees.erase(i);
//    }
//  }
  
}

