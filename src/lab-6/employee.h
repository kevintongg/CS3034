//
// Created by Kevin Tong on 4/10/2017.
//

#ifndef EMPLOYEE
#define EMPLOYEE

#include <iostream>

using namespace std;

class Employee {

public:
  Employee(string employeeId, string firstName, string lastName, double wage, int hours);

  Employee();

  double calcPay(double wage, int hours);

  /**
   * Getters and setters
   **/

  const string &getEmployeeId() const;

  void setEmployeeId(const string &employeeId);

  const string &getFirstName() const;

  void setFirstName(const string &firstName);

  const string &getLastName() const;

  void setLastName(const string &lastName);

  double getWage() const;

  void setWage(double wage);

  int getHours() const;

  void setHours(int hours);

private:
  string employeeId;
  string firstName;
  string lastName;
  double wage;
  int hours;
};


#endif // EMPLOYEE
