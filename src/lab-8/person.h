//
// Created by Kevin Tong on 1/11/2017.
//

#ifndef PERSON
#define PERSON

#include <iostream>

using namespace std;

class Person {

public:
  Person(string firstName, string lastName, char gender, int month, int day, int year);
  
  int getMonth() const;
  
  void setMonth(int month);
  
  int getDay() const;
  
  void setDay(int day);
  
  int getYear() const;
  
  void setYear(int year);
  
  const string &getFirstName() const;
  
  void setFirstName(const string &firstName);
  
  const string &getLastName() const;
  
  void setLastName(const string &lastName);
  
  char getGender() const;
  
  void setGender(char gender);


private:
  int month, day, year;
  string firstName, lastName;
  char gender;
};

int Person::getMonth() const {
  return month;
}

void Person::setMonth(int month) {
  Person::month = month;
}

int Person::getDay() const {
  return day;
}

void Person::setDay(int day) {
  Person::day = day;
}

int Person::getYear() const {
  return year;
}

void Person::setYear(int year) {
  Person::year = year;
}

const string &Person::getFirstName() const {
  return firstName;
}

void Person::setFirstName(const string &firstName) {
  Person::firstName = firstName;
}

const string &Person::getLastName() const {
  return lastName;
}

void Person::setLastName(const string &lastName) {
  Person::lastName = lastName;
}

char Person::getGender() const {
  return gender;
}

void Person::setGender(char gender) {
  Person::gender = gender;
}

#endif // PERSON
