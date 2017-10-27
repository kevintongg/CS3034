#include "lab2.h"

void arrayInput(double *p, const unsigned int size) {
  // Takes up to size doubles
  for (int i = 0; i < size; i++) {
    printf("Element #%i: ", i + 1);
    scanf("%lf", &p[i]);
  }
}

void printArrayPtrArithmetic(const double *p, const unsigned int size) {
  // Prints using pointer arithmetic
  for (int i = 0; i < size; i++) {
    printf("Element #%i: %.2lf\n", (i + 1), *(p + i));
  }
}

void printArrayPtrArithmeticReciprocal(const double *p, const unsigned int size) {
  // Prints using pointer arithmetic
  for (int i = 0; i < size; i++) {
    printf("Element #%i: %lf\n", (i + 1), *(p + i));
  }
}

void reciprocal(double *p, const unsigned int size) {
  for (int i = 0; i < size; i++) {
    p[i] = (1 / p[i]);
  }
}