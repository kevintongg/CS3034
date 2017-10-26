//
// Created by Kevin Tong on 25/10/2017.
//

#include "animal.h"

Animal::Animal(const string &name, double weight)
    : name(name),
      weight(weight) {}

void Animal::eat(double weight) {
  double totalWeight = this->getWeight() + weight;
  this->setWeight(totalWeight);
}

const string &Animal::getName() const {
  return name;
}

void Animal::setName(const string &name) {
  Animal::name = name;
}

double Animal::getWeight() const {
  return weight;
}

void Animal::setWeight(double weight) {
  Animal::weight = weight;
}

ostream &Animal::operator<<(ostream &stream) {
  return stream;
}

