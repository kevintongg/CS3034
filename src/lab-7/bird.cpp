//
// Created by kcr12_000 on 25/10/2017.
//

#include "bird.h"

Bird::Bird(const string &name, double weight)
    : Prey(name, weight) {}

void Bird::flee() {
  cout << this->getName() << " flies away" << endl;
}
