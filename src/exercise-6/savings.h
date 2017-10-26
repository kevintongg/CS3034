//
// Created by Kevin Tong on 23/10/2017.
//

#ifndef SAVINGS
#define SAVINGS

#include <iostream>

using namespace std;

class Savings {
  
  friend ostream &operator<<(ostream &output, const Savings &s);

public:
  Savings(const string &owner, double balance, int accountNumber);
  
  Savings();
  
  const string &getOwner() const;
  
  void setOwner(const string &owner);
  
  double getBalance() const;
  
  void setBalance(double balance);
  
  int getAccountNumber() const;
  
  void setAccountNumber(int accountNumber);

private:
  string owner;
  double balance;
  int accountNumber;
};


#endif // SAVINGS
