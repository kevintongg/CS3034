//
// Created by Kevin Tong on 3/10/2017.
//

#include <stdio.h>
#include "monster_attack.h"
#include "clean.h"
//
//monster *create_monster(monster *data, int counter) {
//
//  data[counter].id = counter;
//
//  printf("\nEntering information about Monster #%i\n", counter);
//  puts("Location of the attack?");
//  fgets(data[counter].location, sizeof(data->location), stdin);
//  puts("Name of the monster?");
//  fgets(data[counter].name, sizeof(data->name), stdin);
//  puts("How many victims for this attack?");
//  scanf("%i", &data[counter].victims);
//
//  clean_stdin();
//
//  return data;
//}

monster *create_monster(monster *data, int counter) {
  
  data->id = counter;
  
  printf("\nEntering information about Monster #%i\n", data->id);
  puts("Location of the attack?");
  fgets(data->location, sizeof(data->location), stdin);
  puts("Name of the monster?");
  fgets(data->name, sizeof(data->name), stdin);
  puts("How many victims for this attack?");
  scanf("%i", &data->victims);
  
  clean_stdin();
  
  return data;
}

void print_monster(monster *data) {
  printf("\nMonster ID: %i\n", data->id);
  printf("Monster name: %s\n", data->name);
  printf("Attack location: %s\n", data->location);
  printf("Number of victims: %i\n", data->victims);
}

int getMonsterId(monster *monster, int search) {
  return monster[search].id;
}