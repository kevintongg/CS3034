//
// Created by Kevin Tong on 9/10/2017.
//

#ifndef CIRCLE
#define CIRCLE

class Circle {
public:
  Circle(double radiusIn);
  
  double getArea() const;
  
  bool operator==(const Circle &other);
  
  Circle operator+(const Circle &other);
  
  Circle operator-(const Circle &other);

  Circle operator++(int &other);

private:
  double radius;
};

#endif // CIRCLE
//
// Created by Kevin Tong on 9/10/2017.
//

#include <iostream>
#include <math.h>

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

//Circle Circle::operator++(int &other) {
//  return Circle(0);
//}
//
// Created by Kevin Tong on 9/10/2017.
//

using namespace std;

int main() {
  Circle *c1 = new Circle(5.0);
  Circle *c2 = new Circle(4.7);
  Circle *c3 = new Circle(4.7);
  
  cout << "area of c1: " << c1->getArea() << " area of c2: " << c2->getArea() << " area of c3: " <<
       c3->getArea() << endl;
  cout << "c1 == c2? " << (*c1 == *c2) << " c2 == c3? " << (*c2 == *c3) << endl;
  Circle c4 = *c1 + *c2;  // have to put this on the stack; could copy it to the heap
  cout << "area of c4: " << c4.getArea() << endl;
  Circle c5 = *c3 - *c1;
  cout << "c3 - c1 = " << c5.getArea() << endl;
  return 0;
}
