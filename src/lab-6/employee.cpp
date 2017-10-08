//
// Created by Kevin Tong on 4/10/2017.
//

#include <iostream>
#include "employee.h"

using namespace std;

Employee::Employee() = default;

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

/**
 * Getters and setters
 **/

const string &Employee::getEmployeeId() const {
  return employeeId;
}

void Employee::setEmployeeId(const string &employeeId) {
  Employee::employeeId = employeeId;
}

const string &Employee::getFirstName() const {
  return firstName;
}

void Employee::setFirstName(const string &firstName) {
  Employee::firstName = firstName;
}

const string &Employee::getLastName() const {
  return lastName;
}

void Employee::setLastName(const string &lastName) {
  Employee::lastName = lastName;
}

double Employee::getWage() const {
  return wage;
}

void Employee::setWage(double wage) {
  Employee::wage = wage;
}

int Employee::getHours() const {
  return hours;
}

void Employee::setHours(int hours) {
  Employee::hours = hours;
}