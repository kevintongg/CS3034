#include <stdio.h>
#include "sorts.h"

int main(void) {
  void (*sp)(int *, int) = NULL;
  const int ARRAYSIZE = 9;
  char choice;
  int my_ints[] = {5, 1, 7, 8, 0, 9, 4, 2, 3};

  printf("address of quick_sort: %p; address of insertion_sort: %p\n", quick_sort, insertion_sort);
  puts("Enter q for quicksort or i for insertion sort:  ");
    choice = (char) getchar();
  if (choice == 'q') {
    sp = quick_sort;
  } else if (choice == 'i') {
    sp = insertion_sort;
  } else printf("sorry, invalid input\n");
  sp(my_ints, ARRAYSIZE);
  for (int i = 0; i < ARRAYSIZE; i++) {
    printf("%d ", my_ints[i]);
  }
  printf("\n");
  return 0;
}
