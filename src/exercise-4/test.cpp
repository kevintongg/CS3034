//
// Created by Kevin Tong on 3/10/2017.
//

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

//
// Created by Kevin Tong on 3/10/2017.
//

#ifndef STOCKSTORAGE
#define STOCKSTORAGE

#include <vector>

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

//
// Created by Kevin Tong on 3/10/2017.
//

#include <iomanip>

using namespace std;

Stock::Stock(int num, int month, int day, int year, string name, double openingPrice, double closingPrice) : num(
    num), month(month), day(day), year(year), name(name), openingPrice(openingPrice), closingPrice(closingPrice) {}

void Stock::showStocks() {
  cout << "\nStock # " << num << ":\nDate: " << month << "/" << day << "/" << year << " | Stock name: " << name
       << " | Opening price: $" << openingPrice << " USD | Closing price: $" << closingPrice << " USD" << endl;
}

string Stock::getCSVString() const {
  return to_string(num) + "," + to_string(month) + "," + to_string(day) + "," + to_string(year) + "," + name + "," +
         to_string(openingPrice) + "," + to_string(closingPrice) + "\n";
}

//
// Created by Kevin Tong on 3/10/2017.
//

#include <fstream>

using namespace std;

void StockStorage::writeHardCodedStocks() {
  ofstream myFile;
  string filePath;
  string line;
  vector<Stock> stocks;
  
  Stock firstStock(1, 10, 2, 2017, "Google", 959.53, 953.27);
  Stock secondStock(2, 10, 2, 2017, "AMD", 12.74, 12.71);
  Stock thirdStock(3, 10, 2, 2017, "T-Mobile US", 61.61, 61.50);
  stocks.push_back(firstStock);
  stocks.push_back(secondStock);
  stocks.push_back(thirdStock);
  
  cout << "Enter full file path: ";
  cin >> filePath;
  myFile.open(filePath);
  
  for (Stock s : stocks) {
    myFile << s.getCSVString();
  }
  
  myFile.close();
}

vector<Stock> StockStorage::readFromFile() {
  ifstream myFile;
  string filePath;
  string line;
  int num, month, day, year;
  string name;
  double openingPrice, closingPrice;
  vector<string> tokens;
  
  cout << "Enter full file path: ";
  cin >> filePath;
  myFile.open(filePath);
  
  if (myFile.is_open()) {
    while (getline(myFile, line)) {
      tokens = tokenize(line);
      num = stoi(tokens[0]);
      month = stoi(tokens[1]);
      day = stoi(tokens[2]);
      year = stoi(tokens[3]);
      openingPrice = stof(tokens[5]);
      closingPrice = stof(tokens[6]);
      Stock s(num, month, day, year, tokens[4], openingPrice, closingPrice);
      stocks.push_back(s);
      if (myFile.eof()) {
        cout << "Reached EOF" << endl;
      }
    }
    cout << stocks.size() << endl;
    myFile.close();
  } else {
    cout << "File open failed" << endl;
  }
  cout << stocks.size() << endl;
  
  return stocks;
}

vector<string> StockStorage::tokenize(string in) {
  // http://oopweb.com/CPP/Documents/CPPHOWTO/Volume/C++Programming-HOWTO-7.html
  vector<string> tokens;
  const string delimiter = ",";
  
  string::size_type lastPosition = in.find_first_not_of(delimiter, 0);
  
  // Find first non-delimiter
  string::size_type position = in.find_first_of(delimiter, lastPosition);
  
  while (string::npos != position || string::npos != lastPosition) {
    // Found a token, add it to the vector
    tokens.push_back(in.substr(lastPosition, position - lastPosition));
    // Skip delimiters; note 'not_of'
    lastPosition = in.find_first_not_of(delimiter, position);
    // Find next non-delimiter
    position = in.find_first_of(delimiter, lastPosition);
  }
  return tokens;
}

//
// Created by Kevin Tong on 3/10/2017.
//

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
    default:
      break;
  }
}