#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
    int id;
    int age;
    double balance_owed;
};

int main(int argc, char **argv) {
  const int num_students = 10;
  srand((unsigned int) time(NULL));  // initialize random number generator
  struct student *curr_student;

// Here is the key line!  It allocates heap space for the array and creates a student pointer to the beginning of the heap space
  struct student *students = (struct student *) malloc(num_students * sizeof(struct student));
  struct student *last = students + (num_students - 1);    // used to find the end of the array in the do loop below
  float total_balance = 0;

  for (int i = 0; i < num_students; i++) {  // need the loop counter for this one
    curr_student = students + i;
    curr_student->id = i + 1;
    curr_student->age = (int) ((double) rand() / RAND_MAX * 25 + 15);
    curr_student->balance_owed = (double) rand() / RAND_MAX * 10000;
  }

  curr_student = students;          // make curr_student point to the beginning of the array

  do {                    // no need for loop counter, so use simpler do...while
    total_balance += curr_student->balance_owed;
    printf("Student %d is %d years old and owes $%8.2f\n", curr_student->id, curr_student->age,
           curr_student->balance_owed);
    curr_student++;
  } while (curr_student <= last);

  printf("Total owed = $%.2f\n", total_balance);

  return 0;
}
