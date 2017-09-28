//
// Created by kcr12_000 on 24/9/2017.
//

#ifndef MONSTER_ATTACK
#define MONSTER_ATTACK

typedef struct monster {
  int attackID;
  char location[128];
  char name[128];
  int victims;
} monster;

void monster_attacks(monster *monster, int size);

void print_attacks(monster *monsters, int size, int victims);

int num_victims(monster *monsters, int size);

#endif //MONSTER_ATTACK
