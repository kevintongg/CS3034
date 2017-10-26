//
// Created by Kevin Tong on 25/10/2017.
//

#ifndef CAT
#define CAT


#include "predator.h"

class Cat : public Predator {

public:
  friend ostream &operator<<(ostream &stream, const Cat &cat);

  Cat(const string &name, double weight);

  void call() override;

  void predate(const Prey &prey) override;

};


#endif //PROJECT_CAT_H
