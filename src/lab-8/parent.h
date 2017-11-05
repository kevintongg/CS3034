//
// Created by Kevin Tong on 1/11/2017.
//

#ifndef PARENT
#define PARENT

#include "person.h"

class Parent : public Person {

public:
  Parent(const string &firstName, const string &lastName, char gender, int month, int day, int year);

};


#endif //PROJECT_PARENT_H
