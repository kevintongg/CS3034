//
// Created by Kevin Tong on 25/10/2017.
//

#ifndef PREDATOR
#define PREDATOR


#include "animal.h"
#include "prey.h"

class Predator : public Animal {

public:
  Predator(const string &name, double weight);
  
  virtual void predate(const Prey &prey) = 0;
};

#endif // PREDATOR
