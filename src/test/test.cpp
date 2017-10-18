#ifndef VAMPIRE
#define VAMPIRE

#include <string>

using namespace std;

class Vampire {
public:
  Vampire(string nameIn, double toothSizeIn);
  
  string getName() const;
  
  double getToothSize() const;
  
  bool operator>(Vampire &other);
  
  friend ostream &operator<<(ostream &output, const Vampire &v);

private:
  string name;
  double toothSize;
};

#endif


using namespace std;

Vampire::Vampire(string nameIn, double toothSizeIn) : name(nameIn), toothSize(toothSizeIn) {}

string Vampire::getName() const { return name; }

double Vampire::getToothSize() const { return toothSize; }

bool Vampire::operator>(Vampire &other) {
  return toothSize - other.toothSize > .001;
}

#include <iostream>
#include <vector>

using namespace std;

ostream &operator<<(ostream &output, const Vampire &v) {
  output << v.name << " is a Vampire whose fangs are " << v.toothSize << " inches long" << endl;
  return output;   // enables cascading
}

template<class T>
int max(vector<T> ts) {
  if (ts.size() == 0) {
    return -1;
  } else if (ts.size() == 1) {
    return 0;
  }
  int max = 0;
  for (int counter = 1; counter < (int) ts.size(); counter++) {
    if (ts[counter] > ts[max]) {
      max = counter;
    }
  }
  return max;
}

int main() {
  vector<int> ints;
  ints.push_back(9);
  ints.push_back(7);
  ints.push_back(42);
  cout << ints[max(ints)] << endl;
  
  vector<Vampire> vs;
  vs.emplace_back("Arthur", 2.2);
  vs.emplace_back(Vampire("Betty", 2.7));
  vs.emplace_back(Vampire("Cathy", 2.12));
  cout << vs[max(vs)] << endl;
  
  
  return 0;
}
