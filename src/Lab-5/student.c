//
// Created by Kevin Tong on 3/10/2017.
//
#include <stdio.h>
#include "student.h"
#include "clean.h"

student *create_student(student *data, int counter) {

  data->id = counter;
  printf("\nEntering information about student #%d\n", data->id);
  puts("Student name?");
  fgets(data->name, sizeof(data->name), stdin);
  puts("Student GPA?");
  scanf("%lf", &data->gpa);
  puts("Student CIN?");
  scanf("%i", &data->cin);

  clean_stdin();

  return data;
}

void print_student(student *data, int counter) {
  printf("\nStudent ID: %i\n", data->id);
  printf("Student name: %s\n", data->name);
  printf("Student GPA: %.2lf\n", data->gpa);
  printf("Student CIN: %i\n", data->cin);
}

int getStudentId(student *data) {
  return data->id;
}