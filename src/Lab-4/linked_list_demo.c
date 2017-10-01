#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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

int main() {
  int command;
  
  node *head = NULL;
  node *temp = NULL;
  
  int counter = 0;
  int temp_num = 0;
  
  monster *data = (monster *) malloc(23 * sizeof(monster));
  
  do {
    show_menu();
    printf("\nEnter a command (0-10, 0 to quit): ");
    scanf("%i", &command);
    clean_stdin();
    switch (command) {
      case 1:
        printf("Please enter a monster attack to prepend: ");
        data = create_monster_attack(data, counter);
        counter++;
        head = prepend(head, data);
        traverse(head, counter);
        break;
      case 2:
        printf("Please enter a monster attack to append: ");
        data = create_monster_attack(data, counter);
        counter++;
        head = append(head, data);
        traverse(head, counter);
        break;
      case 3:
        printf("Please enter an attack ID to search: ");
        scanf("%i", &temp_num);
        clean_stdin();
        temp = search(head, temp_num);
        if (temp != NULL) {
          printf("Element with attack ID value %i found.", temp_num);
        } else {
          printf("Element with attack ID value %i not found.", temp_num);
        }
        break;
      case 4:
        printf("Enter the attack ID value after which you would like to insert the new value: ");
        scanf("%i", &temp_num);
        clean_stdin();
        temp = search(head, temp_num);
        if (temp != NULL) {
          printf("Enter a monster attack to insert: ");
          data = create_monster_attack(data, counter);
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
        temp = search(head, temp_num);
        if (temp != NULL) {
          printf("Enter a monster attack to insert: ");
          data = create_monster_attack(data, counter);
          counter++;
          head = insert_before(head, data, temp);
          if (head != NULL)
            traverse(head, counter);
        } else {
          printf("Element with attack ID value %i not found.", temp_num);
        }
        break;
      case 6:
        head = remove_front(head);
        if (head != NULL)
          traverse(head, counter);
        break;
      case 7:
        head = remove_back(head);
        if (head != NULL)
          traverse(head, counter);
        break;
      case 8:
        printf("Enter the attack ID value to remove: ");
        scanf("%i", &temp_num);
        clean_stdin();
        temp = search(head, temp_num);
        if (temp != NULL) {
          remove_any(head, temp);
          if (head != NULL)
            traverse(head, counter);
        } else {
          printf("Element with attack ID value %i not found.", temp_num);
        }
        break;
      case 9:
        head = insertion_sort(head);
        if (head != NULL)
          traverse(head, counter);
        break;
      case 10:
        head = reverse(head);
        if (head != NULL)
          traverse(head, counter);
        break;
      case 11:
        print_list(data,counter);
        break;
      default:
        break;
    }
    
  } while (command != 0);
  clear(head);
  free(data);
  return 0;
}

