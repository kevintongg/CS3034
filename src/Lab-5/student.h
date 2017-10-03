//
// Created by Kevin Tong on 3/10/2017.
//

#ifndef STUDENT
#define STUDENT

typedef struct student {
  int id;
  char name[48];
  int cin;
} student;

student *makeStudent(student *student, int size);

#endif // STUDENT
