//
// Created by Kevin Tong on 18/10/2017.
//

#include <iostream>

using namespace std;

// 1 5 3 4 -10

int test(int *p, int size) {
  int index = 0;
  for (int i = 0; i < size; ++i) {
    for (int j = i; j < size; ++j) {
      if (p[j] < p[i]) {
        index = j;
      }
    }
  }
  return index;
}

int main() {
  
  int size = 5;
  
  auto *array = new int[size];
  
  array[0] = 1;
  array[1] = 5;
  array[2] = 3;
  array[3] = 4;
  array[4] = -10;
  
  cout << "Sent input: ";
  for (auto i = 0; i < size; ++i) {
    cout << array[i] << " ";
  }
  
  cout << "received answer: " << test(array, size) << endl;
  
  
  return 0;
}