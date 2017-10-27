//
// Created by kcr12_000 on 25/10/2017.
//

#ifndef BIRD
#define BIRD


#include "prey.h"

class Bird : public Prey {

public:
  Bird(const string &name, double weight);

  void call() override;

  void flee() override;
};

#endif // Bird
