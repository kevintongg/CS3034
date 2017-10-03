//
// Created by Kevin Tong on 3/10/2017.
//

#include <stdio.h>
#include "monster_attack.h"

monster *create_monster_attack(monster *data, int counter) {
  
  data[counter].attackID = counter;
  
  printf("\nEntering information about Monster #%d\n", counter);
  puts("Location of the attack?");
  fgets(data[counter].location, sizeof(data->location), stdin);
  puts("Name of the monster?");
  fgets(data[counter].name, sizeof(data->name), stdin);
  puts("How many victims for this attack?");
  scanf("%i", &data[counter].victims);
  
  clean_stdin();
  
  return data;
}