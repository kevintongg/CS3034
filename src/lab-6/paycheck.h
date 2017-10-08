//
// Created by Kevin Tong on 4/10/2017.
//

#ifndef PAYCHECK
#define PAYCHECK

using namespace std;

class Paycheck {

public:
  Paycheck(string employeeId, string firstName, string lastName, double paycheckAmount);

  Paycheck();

  /**
   * Getters and setters
   **/

  string getPaycheck();

  double getPaycheckAmount() const;

  void setPaycheckAmount(double paycheckAmount);

  const string &getEmployeeId() const;

  void setEmployeeId(const string &employeeId);

  const string &getFirstName() const;

  void setFirstName(const string &firstName);

  const string &getLastName() const;

  void setLastName(const string &lastName);

private:
  double paycheckAmount;
  string employeeId;
  string firstName;
  string lastName;
};


#endif // PAYCHECK
