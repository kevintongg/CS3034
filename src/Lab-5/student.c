//
// Created by Kevin Tong on 3/10/2017.
//
#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "clean.h"


student *create_student(student *data, int counter) {

  data = (student *) malloc(sizeof(student));

  data->id = 0;

  printf("\nEntering information about student #%d\n", counter);
  puts("Student name?");
  fgets(data[counter].name, sizeof(data->name), stdin);
  puts("Student CIN?");
  scanf("%i", &data->cin);

  clean_stdin();

  data->id++;

  return data;
}

void print_student(student *data) {
  printf("\nStudent ID: %i\n", data->id);
  printf("Student name: %s\n", data->name);
  printf("Attack location: %i\n", data->cin);
}

int id(student *data) {
  return data->id;
}