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
  
  Employee *employee = new Employee(fullId, firstName, lastName, wage, hours);
}

