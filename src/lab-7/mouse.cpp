//
// Created by kcr12_000 on 25/10/2017.
//

#include "mouse.h"

Mouse::Mouse(const string &name, double weight)
    : Prey(name, weight) {}

void Mouse::call() {
  cout << this->getName() << " says `eek!`" << endl;
}

void Mouse::flee() {
  cout << this->getName() << " scampers off" << endl;
}
