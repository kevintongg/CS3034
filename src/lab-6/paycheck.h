//
// Created by Kevin Tong on 4/10/2017.
//

#ifndef PAYCHECK
#define PAYCHECK

#include <vector>
#include <string>

using namespace std;

class Paycheck {

public:
  Paycheck(string id, string firstName, string lastName, double paycheckAmount);

  Paycheck();

  /**
   * Getters and setters
   **/

  string getPaycheck(const string &id, const string &firstName, const string &lastName, double paycheckAmount);

  double getPaycheckAmount() const;

  void setPaycheckAmount(double paycheckAmount);

  const string &getId() const;

  void setId(const string &id);

  const string &getFirstName() const;

  void setFirstName(const string &firstName);

  const string &getLastName() const;

  void setLastName(const string &lastName);

private:
  string id;
  string firstName;
  string lastName;
  double paycheckAmount;
};


#endif // PAYCHECK
