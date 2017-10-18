#include <stdio.h>
#include <stdlib.h>

typedef struct student{
  int id;
  int age;
  double balance_owed;
}student;

int main(int argc, char **argv) {
  const int num_students = 1000;
  student *students = (struct student *) malloc(num_students * sizeof(struct student));
  
  student student;
  
  
  students->id=1;
  
  printf("%i",*student.id);
  
  
  return 0;
}