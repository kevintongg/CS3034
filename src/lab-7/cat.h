//
// Created by Kevin Tong on 25/10/2017.
//

#ifndef CAT
#define CAT


#include "predator.h"

class Cat : public Predator {
  
  friend ostream &operator<<(ostream &stream, const Cat cat);

public:
  Cat(const string &name, double weight);
  
  void call() override;
  
  ostream operator<<(ostream &stream);
  
  void predate(const Prey &prey) override;
  
};


#endif //PROJECT_CAT_H
