//
// Created by Kevin Tong on 4/10/2017.
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include "paycheck.h"

using namespace std;

Paycheck::Paycheck(string id, string firstName, string lastName, double paycheckAmount)
    : id(move(id)),
      firstName(move(firstName)),
      lastName(move(lastName)),
      paycheckAmount(paycheckAmount) {}

Paycheck::Paycheck() = default;

// e.g. Paycheck for $666.75 issued to Jerry Jones, employee # E12345

string Paycheck::getPaycheck(const string &id, const string &firstName, const string &lastName, double paycheckAmount) {

  auto paycheck = to_string(paycheckAmount);

  return "Paycheck issued for $" + paycheck + ". Paid to the order of: " + firstName +
         " " + lastName + ", Employee #" + id + "\n";
}

double Paycheck::getPaycheckAmount() const {
  return paycheckAmount;
}

void Paycheck::setPaycheckAmount(double paycheckAmount) {
  Paycheck::paycheckAmount = paycheckAmount;
}

const string &Paycheck::getId() const {
  return id;
}

void Paycheck::setId(const string &id) {
  Paycheck::id = id;
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

int Paycheck::getHoursWorked() const {
  return hoursWorked;
}

void Paycheck::setHoursWorked(int hoursWorked) {
  Paycheck::hoursWorked = hoursWorked;
}
