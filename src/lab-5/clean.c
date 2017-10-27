//
// Created by kcr12_000 on 3/10/2017.
//

#include <stdio.h>

/**
 * https://stackoverflow.com/questions/17318886/fflush-is-not-working-in-linux
 */
void clean_stdin() {
  int c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}