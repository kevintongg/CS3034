//
// Created by Kevin Tong on 3/10/2017.
//

#include <stdio.h>
#include <stdlib.h>
#include "monster_attack.h"

/**
 * https://stackoverflow.com/questions/17318886/fflush-is-not-working-in-linux
 */
void clean_stdin() {
  int c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

monster *create_monster(monster *data, int counter) {

  data = (monster *) malloc(sizeof(monster));

  data->id = 0;

  printf("\nEntering information about Monster #%d\n", counter);
  puts("Location of the attack?");
  fgets(data[counter].location, sizeof(data->location), stdin);
  puts("Name of the monster?");
  fgets(data[counter].name, sizeof(data->name), stdin);
  puts("How many victims for this attack?");
  scanf("%i", &data->victims);

  clean_stdin();

  data->id++;

  return data;
}

void *print_monster(monster *data) {
  printf("\nMonster ID: %i\n", data->id);
  printf("Monster name: %s\n", data->name);
  printf("Attack location: %s\n", data->location);
  printf("Number of victims: %i\n", data->victims);
}

int id(monster *monster) {
  return monster->id;
}