//
// Created by Kevin Tong on 3/10/2017.
//

#include <iostream>
#include <iomanip>
#include "stock.h"

using namespace std;

Stock::Stock(int num, int month, int day, int year, string name, double openingPrice, double closingPrice) : num(
    num), month(month), day(day), year(year), name(name), openingPrice(openingPrice), closingPrice(closingPrice) {}

void Stock::showStocks() {
  cout << "\nStock # " << num << ":\nDate: " << month << "/" << day << "/" << year << " | Stock name: " << name
       << " | Opening price: $" << openingPrice << " USD | Closing price: $" << closingPrice << " USD" << endl;
//  cout << "\nStock #: " << num << endl;
//  cout << "Date: " << month << "/" << day << "/" << year << endl;
//  cout << "Stock Name: " << name << endl;
//  cout << "Opening Price: " << openingPrice << endl;
//  cout << "Closing Price: " << closingPrice << endl;
}

string Stock::getCSVString() const {
//  stringstream stream1;
//  stringstream stream2;
//  stream1 << fixed << setprecision(2) << openingPrice;
//  stream2 << fixed << setprecision(2) << closingPrice;
//  string openPrice = stream1.str();
//  string closePrice = stream2.str();
  return to_string(num) + "," + to_string(month) + "," + to_string(day) + "," + to_string(year) + "," + name + "," +
         to_string(openingPrice) + "," + to_string(closingPrice) + "\n";
}
