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

void clean_stdin();

monster *create_monster(monster *monster, int counter);

void *print_monster(monster *monster);

int id(monster *monster);

#endif //MONSTER_ATTACK