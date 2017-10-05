//
// Created by Kevin Tong on 4/10/2017.
//

#ifndef PAYCHECK
#define PAYCHECK

using namespace std;

class Paycheck {

public:
  Paycheck(string employeeId, string firstName, string lastName, double paycheckAmount);
  
  string getPaycheck();
  
private:
  double paycheckAmount;
  string employeeId;
  string firstName;
  string lastName;
};


#endif // PAYCHECK
