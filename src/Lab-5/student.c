//
// Created by Kevin Tong on 3/10/2017.
//
#include <stdio.h>
#include <stdlib.h>
#include "student.h"

/**
 * https://stackoverflow.com/questions/17318886/fflush-is-not-working-in-linux
 */
void clean_stdin() {
  int c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

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

void print(student *data) {

}

int id(student *data) {
  return data->id;
}