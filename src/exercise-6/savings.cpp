//
// Created by Kevin Tong on 23/10/2017.
//

#include "savings.h"

Savings::Savings(const string &owner, double balance, int accountNumber)
    : owner(owner),
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


