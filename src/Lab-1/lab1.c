//
// Created by Kevin Tong on 28/8/2017.
//

#include "stdio.h"

int main() {
  
  int age = 23;
  double gpa = 3.0;
  const double PI = 3.141592654;
  
  double radius = 10;
  double circumference = 2 * PI * radius;
  
  typedef enum {
    RAIN, WIND, SUNSHINE
  } Weather;
  
  int w = SUNSHINE;
  
  printf("Kevin is %i years old and has a GPA of %.2f\n", age, gpa);
  printf("The circumference of a circle with radius 10 is: %.2f\n", circumference);
  
  switch (w) {
    case RAIN:
      printf("Raining! Wear a raincoat!\n");
      break;
    case WIND:
      printf("Windy! Exercise caution!\n");
      break;
    case SUNSHINE:
      printf("Sunny! Have a nice day!\n");
      break;
    default:
      printf("Unknown weather! Use your judgement!\n");
      break;
  }
  
}