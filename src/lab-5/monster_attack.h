//
// Created by kcr12_000 on 24/9/2017.
//

#ifndef MONSTER_ATTACK
#define MONSTER_ATTACK

typedef struct monster {
  int id;
  char location[128];
  char name[128];
  int victims;
} monster;

monster *create_monster(monster *data, int counter);

void print_monster(monster *monster);

int getMonsterId(monster *monster, int n);

#endif //MONSTER_ATTACK