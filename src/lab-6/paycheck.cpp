//
// Created by Kevin Tong on 4/10/2017.
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include "paycheck.h"

using namespace std;

Paycheck::Paycheck(string employeeId, string firstName, string lastName, double paycheckAmount) : employeeId(
    move(employeeId)), firstName(move(firstName)), lastName(move(lastName)), paycheckAmount(paycheckAmount) {
  
}

// eg Paycheck for $666.75 issued to Jerry Jones, employee # E12345

string Paycheck::getPaycheck() {
  stringstream pay_precision;
  pay_precision << fixed << setprecision(2) << paycheckAmount;
  
  string payFixedPrecision = pay_precision.str();
  
  return "Paycheck issued for $" + payFixedPrecision + "; Paid to the order of: " + firstName + lastName +
         ", Employee #" + employeeId +
         "\n";
}

double Paycheck::getPaycheckAmount() const {
  return paycheckAmount;
}

void Paycheck::setPaycheckAmount(double paycheckAmount) {
  Paycheck::paycheckAmount = paycheckAmount;
}

const string &Paycheck::getEmployeeId() const {
  return employeeId;
}

void Paycheck::setEmployeeId(const string &employeeId) {
  Paycheck::employeeId = employeeId;
}

const string &Paycheck::getFirstName() const {
  return firstName;
}

void Paycheck::setFirstName(const string &firstName) {
  Paycheck::firstName = firstName;
}

const string &Paycheck::getLastName() const {
  return lastName;
}

void Paycheck::setLastName(const string &lastName) {
  Paycheck::lastName = lastName;
}
