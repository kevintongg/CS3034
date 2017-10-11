//
// Created by Kevin Tong on 9/10/2017.
//

#include <iostream>
#include "circle.h"

using namespace std;

int main() {
  Circle *c1 = new Circle(5.0);
  Circle *c2 = new Circle(4.7);
  Circle *c3 = new Circle(4.7);
  Circle *c6 = new Circle(3.2);
  
  cout << "area of c1: " << c1->getArea() << " area of c2: " << c2->getArea() << " area of c3: " <<
       c3->getArea() << endl;
  cout << "c1 == c2? " << (*c1 == *c2) << " c2 == c3? " << (*c2 == *c3) << endl;
  Circle c4 = *c1 + *c2;  // have to put this on the stack; could copy it to the heap
  cout << "area of c4: " << c4.getArea() << endl;
  Circle c5 = *c3 - *c1;
  cout << "c3 - c1 = " << c5.getArea() << endl;
  
  cout << "radius c6: " << c5.getArea()++
  return 0;
}
