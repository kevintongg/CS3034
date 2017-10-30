//
// Created by Kevin Tong on 3/10/2017.
//

#include <iostream>
#include "stock.h"

using namespace std;

Stock::Stock(int num, int month, int day, int year, string name, double openingPrice, double closingPrice)
    : num(num),
      month(month),
      day(day),
      year(year),
      name(move(name)),
      openingPrice(openingPrice),
      closingPrice(closingPrice) {}

void Stock::showStocks() {
  cout << "\nStock # " << num << ":\nDate: " << month << "/" << day << "/" << year << " | Stock name: " << name
       << " | Opening price: $" << openingPrice << " USD | Closing price: $" << closingPrice << " USD" << endl;
}

string Stock::getCSVString() const {
  return to_string(num) + "," + to_string(month) + "," + to_string(day) + "," + to_string(year) + "," + name + "," +
         to_string(openingPrice) + "," + to_string(closingPrice) + "\n";
}
