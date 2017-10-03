//
// Created by Kevin Tong on 3/10/2017.
//

#ifndef STOCKSTORAGE
#define STOCKSTORAGE

#include <vector>
#include <string>
#include "stock.h"

using namespace std;

class StockStorage {

public:
  void writeHardCodedStocks();
  
  vector<Stock> readFromFile();

private:
  vector<Stock> stocks;
  
  vector<string> tokenize(string in);
};

#endif // STOCKSTORAGE
