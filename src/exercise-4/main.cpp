//
// Created by Kevin Tong on 3/10/2017.
//

#include <iostream>
#include <vector>
#include "stockstorage.h"

using namespace std;

int main() {
  int choice;
  StockStorage storage;
  
  cout << "Enter 1 to write to file, 2 to read from file " << endl;
  cin >> choice;
  switch (choice) {
    case 1:
      storage.writeHardCodedStocks();
      break;
    case 2:
      for (Stock s : storage.readFromFile()) {
        s.showStocks();
      }
      break;
    default:
      break;
  }
}