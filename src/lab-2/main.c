#include <stdio.h>
#include "lab2.h"

int main() {
  
  // Array of 10 doubles
  const unsigned int size = 10;
  double array[size];
  // Array for copying original array for reciprocals
  double arrayCopy[size];
  
  printf("Creating an array of %i doubles.\n", size);
  arrayInput(array, size);
  printf("\nPrinting our array using pointer arithmetic.\n");
  printArrayPtrArithmetic(array, size);
  
  printf("\nCopying our array into a new array.\n");
  for (int i = 0; i < size; i++) {
    arrayCopy[i] = array[i];
  }
  
  printf("\nTaking the reciprocal of our copied array.\n");
  reciprocal(arrayCopy, size);
  
  printf("\nPrinting our original array.\n");
  printArrayPtrArithmetic(array, size);
  
  printf("\nPrinting our reciprocal array.\n");
  printArrayPtrArithmeticReciprocal(arrayCopy, size);
  
}
