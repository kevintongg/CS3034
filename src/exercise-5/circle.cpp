//
// Created by Kevin Tong on 9/10/2017.
//

#include <iostream>
#include <math.h>
#include "circle.h"

using namespace std;

Circle::Circle(double radiusIn) : radius(radiusIn) {}

double Circle::getArea() const {
  return M_PI * pow(radius, 2);
}

bool Circle::operator==(const Circle &other) {
  cout << "called " << endl;
  return abs(other.radius - radius) < 0.0001;
}

Circle Circle::operator+(const Circle &other) {
  double combinedArea = M_PI * pow(radius, 2) + other.getArea();
  double newRadius = sqrt(combinedArea / M_PI);
  return Circle(newRadius);
}

Circle Circle::operator-(const Circle &other) {
  this->radius -= other.radius;
  if (this->radius < 0.00001) {
    this->radius = 0;
  }
  return *this;
}

Circle *Circle::operator++(int &other) {
  this->radius += 1;
  return this;
}
