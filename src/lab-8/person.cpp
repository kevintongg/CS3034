//
// Created by Kevin Tong on 1/11/2017.
//

#include "person.h"

Person::Person(string firstName, string lastName, char gender, int month, int day, int year)
    : firstName(move(firstName)),
      lastName(move(lastName)),
      gender(gender),
      month(month),
      day(day),
      year(year) {}

