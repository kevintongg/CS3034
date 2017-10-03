//
// Created by Kevin Tong on 3/10/2017.
//

#ifndef STOCK
#define STOCK

#include <iostream>

using namespace std;

class Stock {

public:
  Stock(int num, int month, int day, int year, string name, double openingPrice, double closingPrice);
  
  void showStocks();
  
  string getCSVString() const;

private:
  int num;
  int month;
  int day;
  int year;
  string name;
  double openingPrice;
  double closingPrice;
};

#endif // STOCK
