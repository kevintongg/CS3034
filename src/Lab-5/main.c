#include <time.h>
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

int num_of_attacks() {

  int n;

  puts("How many monster attacks should there be?");
  scanf("%i", &n);

  clean_stdin();

  return n;
}

void monster_attacks(monster *monsters, int size) {

  monster *current_monster = monsters;

  for (int i = 0; i < size; ++i) {
    current_monster[i].attackID = i + 1;

    printf("Entering information about Attack #%d\n", current_monster[i].attackID);
    puts("Location of the attack?");
    fgets(current_monster[i].location, sizeof(current_monster->location), stdin);
    puts("Name of the monster?");
    fgets(current_monster[i].name, sizeof(current_monster->name), stdin);
    puts("How many victims for this attack?");
    scanf("%i", &current_monster[i].victims);

    clean_stdin();
  }
}

void print_attacks(monster *monsters, int size, int victims) {

  puts("Now printing information about the monster attacks: ");
  for (int i = 0; i < size; i++) {
    printf("\nAttack #%i:\n", monsters->attackID);
    printf("Location of attack: %s\n", monsters->location);
    printf("Name of monster: %s\n", monsters->name);
    printf("Number of victims: %i\n", monsters->victims);
    monsters++;
  }
  puts("------------");
  printf("\nTotal number of victims: %i\n", victims);
}

int num_victims(monster *monsters, int size) {

  int victims = 0;

  for (int i = 0; i < size; ++i) {
    victims += monsters[i].victims;
  }

  return victims;
}


int main(int argc, char const *argv[]) {

  const int size = num_of_attacks();
  monster *monsters = (monster *) malloc(size * sizeof(monster));

  monster_attacks(monsters, size);
  num_victims(monsters, size);

  const int victims = num_victims(monsters, size);
  print_attacks(monsters, size, victims);

  free(monsters);

  return 0;
}
