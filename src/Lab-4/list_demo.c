#include <stdio.h>
#include "linked_list.h"

int main() {
  int command;
  int data;

  node *head = NULL;
  node *tmp = NULL;

  do {
    show_menu();
    printf("\nEnter a command(0-10,0 to quit): ");
    scanf("%d", &command);

    switch (command) {
      case 1:
        printf("Please enter a number to prepend: ");
        scanf("%d", &data);
        head = prepend(head, data);
        traverse(head);
        break;
      case 2:
        printf("Please enter a number to append: ");
        scanf("%d", &data);
        head = append(head, data);
        traverse(head);
        break;
      case 3:
        printf("Please enter a number to search: ");
        scanf("%d", &data);
        tmp = search(head, data);
        if (tmp != NULL) {
          printf("Element with value %d found.", data);
        } else {
          printf("Element with value %d not found.", data);
        }
        break;
      case 4:
        printf("Enter the element value after which you would like to insert the new value: ");
        scanf("%d", &data);
        tmp = search(head, data);
        if (tmp != NULL) {
          printf("Enter the value to insert: ");
          scanf("%d", &data);
          head = insert_after(head, data, tmp);
          if (head != NULL)
            traverse(head);
        } else {
          printf("Element with value %d not found.", data);
        }
        break;
      case 5:
        printf("Enter the element value before which you would like to insert a new value: ");
        scanf("%d", &data);
        tmp = search(head, data);
        if (tmp != NULL) {
          printf("Enter the value to insert: ");
          scanf("%d", &data);
          head = insert_before(head, data, tmp);

          if (head != NULL)
            traverse(head);
        } else {
          printf("Element with value %d not found.", data);
        }
        break;
      case 6:
        head = remove_front(head);
        if (head != NULL)
          traverse(head);
        break;
      case 7:
        head = remove_back(head);
        if (head != NULL)
          traverse(head);
        break;
      case 8:
        printf("Enter the element value to remove: ");
        scanf("%d", &data);
        tmp = search(head, data);
        if (tmp != NULL) {
          remove_any(head, tmp);
          if (head != NULL)
            traverse(head);
        } else {
          printf("Element with value %d not found.", data);
        }
        break;
      case 9:
        head = insertion_sort(head);
        if (head != NULL)
          traverse(head);
        break;
      case 10:
        head = reverse(head);
        if (head != NULL)
          traverse(head);
        break;
      default:
        break;
    }

  } while (command != 0);
  clear(head);
  return 0;
}

