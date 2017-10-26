//
// Created by Kevin Tong on 23/10/2017.
//

#ifndef SAVINGS
#define SAVINGS

#include <iostream>

using namespace std;

class Savings {
  
  friend ostream &operator<<(ostream &stream, const Savings &s);

public:
  Savings(string owner, double balance, int accountNumber);
  
  Savings();
  
  const string &getOwner() const;
  
  void setOwner(const string &owner);
  
  double getBalance() const;
  
  void setBalance(double balance);
  
  int getAccountNumber() const;
  
  void setAccountNumber(int accountNumber);

private:
  string owner;
  double balance{};
  int accountNumber{};
};


#endif // SAVINGS

Savings::Savings(string owner, double balance, int accountNumber)
    : owner(std::move(owner)),
      balance(balance),
      accountNumber(accountNumber) {}

ostream &operator<<(ostream &stream, const Savings &s) {
  stream << s.getOwner() << "; Account number: " << s.getAccountNumber() << "; Account balance: " << s.getBalance();
  return stream;
}

const string &Savings::getOwner() const {
  return owner;
}

void Savings::setOwner(const string &owner) {
  Savings::owner = owner;
}

double Savings::getBalance() const {
  return balance;
}

void Savings::setBalance(double balance) {
  Savings::balance = balance;
}

int Savings::getAccountNumber() const {
  return accountNumber;
}

void Savings::setAccountNumber(int accountNumber) {
  Savings::accountNumber = accountNumber;
}

Savings::Savings() = default;

#include <queue>
#include <utility>

class CompareAccountNumber {

public:
  bool operator()(Savings &a, Savings &b) {
    return a.getAccountNumber() > b.getAccountNumber();
  }
};

class CompareBalance {

public:
  bool operator()(Savings &a, Savings &b) {
    return a.getBalance() < b.getBalance();
  }
};

int main() {
  
  priority_queue<Savings, vector<Savings>, CompareAccountNumber> queue1;
  queue1.push(Savings("Kevin", 2384, 237759));
  queue1.push(Savings("Cedric", 2385, 237760));
  
  cout << "Savings accounts in ascending order of account numbers" << endl;
  
  while (!queue1.empty()) {
    cout << queue1.top() << endl;
    queue1.pop();
  }
  
  cout << endl << "Savings accounts in descending order of balances" << endl;
  
  priority_queue<Savings, vector<Savings>, CompareBalance> queue2;
  queue2.push(Savings("John", 3456, 143735));
  queue2.push(Savings("Jane", 2345, 542346));
  
  while (!queue2.empty()) {
    cout << queue2.top() << endl;
    queue2.pop();
  }
}