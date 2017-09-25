#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void show_menu() {
  printf("\n--- C Linked List Demonstration --- \n\n");
  printf("0.quit\n");
  printf("1.prepend an element\n");
  printf("2.append an element\n");
  printf("3.search for an element\n");
  printf("4.insert after an element\n");
  printf("5.insert before an element\n");
  printf("6.remove front node\n");
  printf("7.remove back node\n");
  printf("8.remove any node\n");
  printf("9.sort the list\n");
  printf("10.Reverse the linked list\n");
}

/*
    create a new node
    initialize the data and next field
 
    return the newly created node
*/

/*
 * creates a new node
 * initializes the data and the next field
 * 
 * returns the newly created monster attack
 * 
 * */

node *create(monster monster, node *next) {
  node *new_attack = (node *) malloc(sizeof(node));

  if (new_attack == NULL) {
    printf("Error creating a new node.\n");
    exit(0);
  }
  new_attack->monster = monster;
  new_attack->next = next;

  return new_attack;
}


/*
    add a new node at the beginning of the list
*/
node *prepend(node *head, monster monster) {
  node *new_attack = create(monster, head);
  head = new_attack;
  return head;
}

/*
    add a new node at the end of the list
*/
node *append(node *head, monster monster) {
  if (head == NULL) head = create(monster, head);
  else {
    /* go to the last node */
    node *cursor = head;
    while (cursor->next != NULL)
      cursor = cursor->next;

    /* create a new node */
    node *new_attack = create(monster, NULL);
    cursor->next = new_attack;
  }
  return head;
}

/*
    insert a new node after the prev node
*/
node *insert_after(node *head, monster monster, node *prev) {
  if (head == NULL || prev == NULL)
    return NULL;
  /* find the prev node, starting from the first node*/
  node *cursor = head;
  while (cursor != prev)
    cursor = cursor->next;

  if (cursor != NULL) {
    node *new_attack = create(monster, cursor->next);
    cursor->next = new_attack;
    return head;
  } else {
    return NULL;
  }
}

/*
    insert a new node before the nxt node
*/
node *insert_before(node *head, monster monster, node *nxt) {
  if (nxt == NULL || head == NULL)
    return NULL;

  if (head == nxt) {
    head = prepend(head, monster);
    return head;
  }

  /* find the prev node, starting from the first node*/
  node *cursor = head;
  while (cursor != NULL) {
    if (cursor->next == nxt)
      break;
    cursor = cursor->next;
  }

  if (cursor != NULL) {
    node *new_attack = create(monster, cursor->next);
    cursor->next = new_attack;
    return head;
  } else {
    return NULL;
  }
}

/*
    traverse the linked list
*/
void traverse(node *head) {
  node *cursor = head;
  while (cursor != NULL) {
    display(cursor);
    cursor = cursor->next;
  }
  printf("\n");
}

/*
    remove node from the front of list
*/
node *remove_front(node *head) {
  if (head == NULL)
    return NULL;
  node *front = head;
  head = head->next;
  front->next = NULL;
  /* is this the last node in the list */
  if (front == head)
    head = NULL;
  free(front);
  return head;
}

/*
    remove node from the back of the list
*/
node *remove_back(node *head) {
  if (head == NULL)
    return NULL;

  node *cursor = head;
  node *back = NULL;
  while (cursor->next != NULL) {
    back = cursor;
    cursor = cursor->next;
  }

  if (back != NULL)
    back->next = NULL;

  /* if this is the last node in the list*/
  if (cursor == head)
    head = NULL;

  free(cursor);

  return head;
}

/*
    remove a node from the list
*/
node *remove_any(node *head, node *nd) {
  if (nd == NULL)
    return NULL;
  /* if the node is the first node */
  if (nd == head)
    return remove_front(head);

  /* if the node is the last node */
  if (nd->next == NULL)
    return remove_back(head);

  /* if the node is in the middle */
  node *cursor = head;
  while (cursor != NULL) {
    if (cursor->next == nd)
      break;
    cursor = cursor->next;
  }

  if (cursor != NULL) {
    node *temp = cursor->next;
    cursor->next = temp->next;
    temp->next = NULL;
    free(temp);
  }
  return head;

}

/*
    display a node
*/
void display(node *n) {
  if (n != NULL)
    printf("%d ", n->monster);
}

/*
    Search for a specific node with input data
 
    return the first matched node that stores the input data,
    otherwise return NULL
*/
node *search(node *head, monster monster) {

  node *cursor = head;
  while (cursor != NULL) {
    if (cursor->monster == monster)
      return cursor;
    cursor = cursor->next;
  }
  return NULL;
}

/*
    remove all element of the list
*/
void clear(node *head) {
  node *cursor, *temp;

  if (head != NULL) {
    cursor = head->next;
    head->next = NULL;
    while (cursor != NULL) {
      temp = cursor->next;
      free(cursor);
      cursor = temp;
    }
  }
}

/*
    return the number of elements in the list
*/
int count(node *head) {
  node *cursor = head;
  int c = 0;
  while (cursor != NULL) {
    c++;
    cursor = cursor->next;
  }
  return c;
}

/*
    sort the linked list using insertion sort
*/
node *insertion_sort(node *head) {
  node *x, *y, *e;

  x = head;
  head = NULL;

  while (x != NULL) {
    e = x;
    x = x->next;
    if (head != NULL) {
      if (e->monster > head->monster) {
        y = head;
        while ((y->next != NULL) && (e->monster > y->next->monster)) {
          y = y->next;
        }
        e->next = y->next;
        y->next = e;
      } else {
        e->next = head;
        head = e;
      }
    } else {
      e->next = NULL;
      head = e;
    }
  }
  return head;
}

/*
    reverse the linked list
*/
node *reverse(node *head) {
  node *prev = NULL;
  node *current = head;
  node *next;
  while (current != NULL) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  head = prev;
  return head;
}

int main() {

  int choice;
  monster monster;

  node *head = NULL;
  node *temp = NULL;

  do {
    show_menu();
    printf("\nEnter a command(0-10,0 to quit): ");
    scanf("%i", &choice);

    switch (choice) {
      case 1:
        puts("Please enter an attack to prepend:");
        puts("Location of the attack?");
        fgets(monster.location, sizeof(monster.location), stdin);
        puts("Name of the monster?");
        fgets(monster.name, sizeof(monster.name), stdin);
        head = prepend(head, monster);
        break;
      case 2:
        puts("Please enter an attack to append");
        puts("Location of the attack?");
        fgets(monster.location, sizeof(monster.location), stdin);
        puts("Name of the monster?");
        fgets(monster.name, sizeof(monster.name), stdin);
        head = append(head, monster);
        break;
      case 3:
        printf("Please enter an attack to search: ");
        scanf("%d", &monster);
        temp = search(head, monster);
        if (temp != NULL) {
          printf("Element with value %d found.", monster);
        } else {
          printf("Element with value %d not found.", monster);
        }
        break;
      case 4:
        printf("Enter the element value after which you would like to insert the new attack: ");
        scanf("%d", &monster);
        temp = search(head, monster);
        if (temp != NULL) {
          puts("Please enter details about a monster attack to prepend:");
          puts("Location of the attack?");
          fgets(monster.location, sizeof(monster.location), stdin);
          puts("Name of the monster?");
          fgets(monster.name, sizeof(monster.name), stdin);
          head = insert_after(head, monster, temp);
          if (head != NULL) {
            traverse(head);
          }
        } else {
          printf("Element with value %d not found.", monster);
        }
        break;
      case 5:
        printf("Enter the element value before which you would like to insert a new attack: ");
        scanf("%d", &monster);
        temp = search(head, monster);
        if (temp != NULL) {
          printf("Enter the attack to insert: ");
          puts("Please enter details about a monster attack to prepend:");
          puts("Location of the attack?");
          fgets(monster.location, sizeof(monster.location), stdin);
          puts("Name of the monster?");
          fgets(monster.name, sizeof(monster.name), stdin);
          head = insert_before(head, monster, temp);
          if (head != NULL) {
            traverse(head);
          }
        } else {
          printf("Element with value %d not found.", monster);
        }
        break;
      case 6:
        head = remove_front(head);
        if (head != NULL) {
          traverse(head);
        }
        break;
      case 7:
        head = remove_back(head);
        if (head != NULL) {
          traverse(head);
        }
        break;
      case 8:
        printf("Enter the element value to remove: ");
        scanf("%d", &monster);
        temp = search(head, monster);
        if (temp != NULL) {
          remove_any(head, temp);
          if (head != NULL) {
            traverse(head);
          }
        } else {
          printf("Element with value %d not found.", monster);
        }
        break;
      case 9:
        head = insertion_sort(head);
        if (head != NULL) {
          traverse(head);
        }
        break;
      case 10:
        head = reverse(head);
        if (head != NULL) {
          traverse(head);
        }
        break;
      default:
        break;
    }
  } while (choice != 0);

  clear(head);

  return 0;
}