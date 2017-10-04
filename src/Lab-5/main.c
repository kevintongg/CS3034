#include <stdio.h>
#include <stdlib.h>
#include "monster_attack.h"
#include "linked_list.h"
#include "student.h"

/**
 * https://stackoverflow.com/questions/17318886/fflush-is-not-working-in-linux
 */
void clean_stdin() {
  int c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

void show_menu() {
  puts("\n--- C Linked List Demonstration --- \n\n");
  puts("0. Quit\n");
  puts("1. Prepend an element\n");
  puts("2. Append an element\n");
  puts("3. Search for an element\n");
  puts("4. Insert after an element\n");
  puts("5. Insert before an element\n");
  puts("6. Remove front node\n");
  puts("7. Remove back node\n");
  puts("8. Remove any node\n");
  puts("9. Sort the list\n");
  puts("10. Reverse the linked list\n");
  puts("11. Prints the linked list\n");
}

int main(int argc, char const *argv[]) {
  int main() {
    int command;
    char choice;

    node *head = NULL;
    node *temp = NULL;

    int counter = 0;
    int temp_num = 0;

    void *(*create)(void *ptr) = NULL;
    void *(*print)(void *ptr) = NULL;
    int *(*id)(void *ptr) = NULL;
    void *data = NULL;

    puts("Choose 'm' for monsters or 's' for students");
    choice = (char) getchar();
    if (choice == 'm') {
      create = (void *) create_monster(data, counter);
      print = (void *) print_monster(data);
      id = (int *) id(data);
    } else if (choice == 's') {
      create = (void *) create_student(data, counter);
    } else {
      puts("Try again!");
    }

    do {
      show_menu();
      printf("\nEnter a command (0-10, 0 to quit): ");
      scanf("%i", &command);
      clean_stdin();
      switch (command) {
        case 1:
          printf("Please enter data to prepend: ");
          data = create(data);
          counter++;
          head = prepend(head, data);
          traverse(head, data);
          break;
        case 2:
          printf("Please enter data to append: ");
          data = create(data);
          counter++;
          head = append(head, data);
          traverse(head, data);
          break;
        case 3:
          printf("Please enter an ID to search: ");
          scanf("%i", &temp_num);
          clean_stdin();
          temp = search(head, temp_num, id);
          if (temp != NULL) {
            printf("Element with ID value %i found.", temp_num);
          } else {
            printf("Element with ID value %i not found.", temp_num);
          }
          break;
        case 4:
          printf("Enter the ID value after which you would like to insert the new value: ");
          scanf("%i", &temp_num);
          clean_stdin();
          temp = search(head, temp_num, id);
          if (temp != NULL) {
            printf("Enter a monster attack to insert: ");
            data = create_monster(data, counter);
            counter++;
            head = insert_after(head, data, temp);
            if (head != NULL)
              traverse(head, counter);
          } else {
            printf("Element with value %i not found.", temp_num);
          }
          break;
        case 5:
          printf("Enter the attack ID value before which you would like to insert a new value: ");
          scanf("%i", &temp_num);
          clean_stdin();
          temp = search(head, temp_num, id);
          if (temp != NULL) {
            printf("Enter a monster attack to insert: ");
            data = create_monster(data, counter);
            counter++;
            head = insert_before(head, data, temp);
            if (head != NULL)
              traverse(head, print);
          } else {
            printf("Element with attack ID value %i not found.", temp_num);
          }
          break;
        case 6:
          head = remove_front(head);
          if (head != NULL)
            traverse(head, print);
          break;
        case 7:
          head = remove_back(head);
          if (head != NULL)
            traverse(head, print);
          break;
        case 8:
          printf("Enter the attack ID value to remove: ");
          scanf("%i", &temp_num);
          clean_stdin();
          temp = search(head, temp_num, id);
          if (temp != NULL) {
            remove_any(head, temp);
            if (head != NULL)
              traverse(head, print);
          } else {
            printf("Element with attack ID value %i not found.", temp_num);
          }
          break;
        case 9:
          head = insertion_sort(head);
          if (head != NULL)
            traverse(head, print);
          break;
        case 10:
          head = reverse(head);
          if (head != NULL)
            traverse(head, print);
          break;
        default:
          break;
      }

    } while (command != 0);
    clear(head);
    free(data);
    return 0;
  }
}
