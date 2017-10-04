//
// Created by Kevin Tong on 3/10/2017.
//

#ifndef STUDENT
#define STUDENT

typedef struct student {
    int id;
    char name[128];
    int cin;
} student;

void clean_stdin();

student *create_student(student *student, int counter);

void print(student *student);

int id(student *student);

#endif // STUDENT
