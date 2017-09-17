#include <malloc.h>
#include <time.h>
#include <stdio.h>

struct monster {
    int attackID;
    char location[50];
    char name[50];
    int victims;
};

int num_of_attacks() {

  int n;

  puts("How many monster attacks should there be?");
  scanf("%i", &n);

  return n;
}

void monster_attacks(struct monster *monsters, int size) {

  // RNG
  srand((unsigned int) time(NULL));

  struct monster *current_monster = monsters;

  for (int i = 1; i <= size; i++) {
    current_monster->attackID = i;
    printf("attack id %d\n", current_monster->attackID);

    printf("Entering information about Attack #%i: \n", current_monster->attackID);
    puts("Location of the attack?:");
    scanf("%s", current_monster->location);

    puts("Name of the monster?:");
    scanf("%s", current_monster->name);
    current_monster++;
  }
}

void print_attacks(struct monster *monsters, int size) {

  for (int i = 0; i < size; i++) {
    monsters += i;
    printf("Attack #%d: \n", monsters->attackID);
    printf("Location of attack: %s\n", monsters->location);
    printf("Name of monster: %s\n", monsters->name);
  }
}

void num_victims(struct monster *monsters, int size) {

  monsters->victims = rand() / RAND_MAX * size;
  printf("Number of victim(s): %d\n", monsters->victims);
}


int main(int argc, char const *argv[]) {

  const int size = num_of_attacks();
  struct monster *monsters = (struct monster *) malloc(size * sizeof(struct monster));

  monster_attacks(monsters, size);
  print_attacks(monsters, size);
  num_victims(monsters, size);

  return 0;
}