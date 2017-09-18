#include <time.h>
#include <stdio.h>
#include <stdlib.h>

struct monster {
  int attackID;
  char location[50];
  char name[50];
  int victims;
};

/**
 * https://stackoverflow.com/questions/17318886/fflush-is-not-working-in-linux
 */
void clean_stdin()
{
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

void monster_attacks(struct monster *monsters, int size) {
  
  struct monster *current_monster = monsters;
  
  for (int i = 0; i < size; ++i) {
    current_monster[i].attackID = i + 1;
    
    printf("Entering information about Attack #%d\n", current_monster[i].attackID);
    puts("Location of the attack?");
    fgets(current_monster[i].location, sizeof(current_monster->location), stdin);
    puts("Name of the monster?");
    fgets(current_monster[i].name, sizeof(current_monster->name), stdin);
  }
  
  clean_stdin();
}

void print_attacks(struct monster *monsters, int size) {
  
  for (int i = 0; i < size; i++) {
    printf("Attack #%i:\n", monsters->attackID);
    printf("Location of attack: %s\n", monsters->location);
    printf("Name of monster: %s\n", monsters->name);
    monsters++;
  }
}

void num_victims(struct monster *monsters, int size) {
  printf("How many victim(s) out of %d were there?\n", size);
  scanf("%i", &monsters->victims);
  printf("Number of victim(s): %d\n", monsters->victims);
}


int main(int argc, char const *argv[]) {
  
  const int size = num_of_attacks();
  struct monster *monsters = (struct monster *) malloc(size * sizeof(struct monster));
  
  monster_attacks(monsters, size);
  print_attacks(monsters, size);
  num_victims(monsters, size);
  
  free(monsters);
  
  return 0;
}
