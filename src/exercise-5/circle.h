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
  
  Circle *operator++(int &other);

private:
  double radius;
};

#endif // CIRCLE
