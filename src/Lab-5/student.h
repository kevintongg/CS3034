//
// Created by Kevin Tong on 3/10/2017.
//

#ifndef STUDENT
#define STUDENT

typedef struct student {
  int id;
  char name[128];
  double gpa;
  int cin;
} student;

student *create_student(student *student, int counter);

void print_student(student *student, int counter);

int getStudentId(student *student);

#endif // STUDENT
