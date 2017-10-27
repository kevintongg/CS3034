//
// Created by Kevin Tong on 25/10/2017.
//

#ifndef PREY
#define PREY


#include "animal.h"

class Prey : public Animal {

public:
  Prey(const string &name, double weight);
  
  virtual void flee() = 0;
};

#endif // PREY
