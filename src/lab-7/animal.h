//
// Created by Kevin Tong on 25/10/2017.
//

#ifndef ANIMAL
#define ANIMAL

#include <iostream>

using namespace std;

class Animal {

public:
  Animal(const string &name, double weight);

  void eat(double weight);
  
  const string &getName() const;
  
  void setName(const string &name);
  
  double getWeight() const;
  
  void setWeight(double weight);
  
  virtual void call() = 0;

  virtual ostream &operator<<(ostream &stream);
  
protected:
  string name;
  double weight;
};


#endif // ANIMAL
