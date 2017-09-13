#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << "Hello, World!" << endl;
  
  std::vector<int> array;
  
  array.push_back(7);
  array.push_back(4);
  array.push_back(8);
  array.push_back(5);
  
  cout << "original vector" << endl;
  
  for (auto i : array) {
    cout << i << endl;
  }
  
  cout << "sorting" << endl;
  
  for (auto i = 0; i < array.size(); i++) {
    for (auto j = i; j < array.size(); j++) {
      if (array[j] < array[i]) {
        auto temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
  
  cout << "sorted vector" << endl;
  
  for (auto i : array) {
    cout << i << endl;
  }
  
  return 0;
}