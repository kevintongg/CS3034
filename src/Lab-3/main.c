#include <malloc.h>
#include "stdio.h"

struct monster_attack {
    int attackID;
    char location[50];
    char name[50];
    int victims;
};


int attackNum() {

  int number = 0;

  puts("How many monster attacks should there be?");
  scanf("%i", &number);

  return number;
}

void print_attacks(struct monster_attack *p) {

}

int main(int argc, char const *argv[]) {

  int num_attacks = attackNum();

//  printf("%i", num_attacks);

//  int numAttacks = numAttacks();

  struct monster_attack *monsters = malloc(sizeof(struct monster_attack));



  return 0;
}