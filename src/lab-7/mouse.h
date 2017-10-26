//
// Created by kcr12_000 on 25/10/2017.
//

#ifndef MOUSE
#define MOUSE


#include "prey.h"

class Mouse : public Prey {

public:
  Mouse(const string &name, double weight);

  void call() override;
};


#endif // MOUSE
