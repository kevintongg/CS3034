#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void myTest() {
  monster m1;
  m1.attackID = 1;
//  strc;
  
  // wilbertveit@rocketmail.com
  
}

/**
 * https://stackoverflow.com/questions/17318886/fflush-is-not-working-in-linux
 */
void clean_stdin() {
  int c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}

monster *create_monster_attack(monster *data, int counter) {
  
  data[counter].attackID = counter;
  
  printf("Entering information about Monster #%d\n", data[counter].attackID);
  puts("Location of the attack?");
  fgets(data[counter].location, sizeof(data->location), stdin);
  puts("Name of the monster?");
  fgets(data[counter].name, sizeof(data->name), stdin);
  puts("How many victims for this attack?");
  scanf("%i", &data[counter].victims);
  
//  printf("Attack #: %i | Location: %s | Name: %s | Victims: %i", data[counter].attackID, data[counter].location,
//         data[counter].name, data[counter].victims);
  
  printf("Attack#: %i\n", data[counter].attackID);
  printf("Location: %s\n", data[counter].location);
  printf("Name: %s\n", data[counter].name);
  printf("Victims: %i\n", data[counter].victims);
  
  clean_stdin();
  
  puts("done");
  
  return data;
}

/*
    create a new node
    initialize the data and next field
 
    return the newly created node
*/
node *create(monster *data, node *next) {
  node *new_node = (node *) malloc(sizeof(node));
  if (new_node == NULL) {
    printf("Error creating a new node.\n");
    exit(0);
  }
  new_node->data = data;
  new_node->next = next;
  
  return new_node;
}

/*
    add a new node at the beginning of the list
*/
node *prepend(node *head, monster *data) {
  node *new_node = create(data, head);
  head = new_node;
  return head;
}

/*
    add a new node at the end of the list
*/
node *append(node *head, monster *data) {
  if (head == NULL) {
    head = create(data, head);
  } else {
    /* go to the last node */
    node *cursor = head;
    while (cursor->next != NULL) {
      cursor = cursor->next;
    }
    
    /* create a new node */
    node *new_node = create(data, NULL);
    cursor->next = new_node;
  }
  return head;
}

/*
    insert a new node after the prev node
*/
node *insert_after(node *head, monster *data, node *prev) {
  if (head == NULL || prev == NULL)
    return NULL;
  /* find the prev node, starting from the first node*/
  node *cursor = head;
  while (cursor != prev)
    cursor = cursor->next;
  
  if (cursor != NULL) {
    node *new_node = create(data, cursor->next);
    cursor->next = new_node;
    return head;
  } else {
    return NULL;
  }
}

/*
    insert a new node before the nxt node
*/
node *insert_before(node *head, monster *data, node *nxt) {
  if (nxt == NULL || head == NULL)
    return NULL;
  
  if (head == nxt) {
    head = prepend(head, data);
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
    node *new_node = create(data, cursor->next);
    cursor->next = new_node;
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
    node *tmp = cursor->next;
    cursor->next = tmp->next;
    tmp->next = NULL;
    free(tmp);
  }
  return head;
  
}

/*
    display a node
*/
void display(node *n) {
  if (n != NULL)
    printf("%d ", n->data->attackID);
}

/*
    Search for a specific node with input data
 
    return the first matched node that stores the input data,
    otherwise return NULL
*/
node *search(node *head, int id, int counter) {
  
  node *cursor = head;
  while (cursor != NULL) {
    if (cursor->data[counter].attackID == id) {
      return cursor;
    }
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
      if (e->data->attackID > head->data->attackID) {
        y = head;
        while ((y->next != NULL) && (e->data->attackID > y->next->data->attackID)) {
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

void show_menu() {
  printf("\n--- C Linked List Demonstration --- \n\n");
  puts("0. Quit\n");
  puts("1. Prepend an element");
  puts("2. Append an element");
  puts("3. Search for an element");
  puts("4. Insert after an element");
  puts("5. Insert before an element");
  puts("6. Remove front node");
  puts("7. Remove back node");
  puts("8. Remove any node");
  puts("9. Sort the list");
  puts("10. Reverse the linked list");
  puts("11. Print an element");
  
}

int main() {
  int command;
  int counter = 1;
  monster *data = (monster *) malloc(sizeof(monster));
  
  node *head = NULL;
  node *temp = NULL;
  
  do {
    show_menu();
    printf("\nEnter a command (0-10, 0 to quit): ");
    scanf("%d", &command);
    clean_stdin();
    switch (command) {
      case 1:
        puts("before");
        printf("counter before: %i\n", counter);
        data = create_monster_attack(data, counter);
        counter++;
        puts("after");
        printf("counter after: %i\n", counter);
        head = prepend(head, data);
        traverse(head);
        break;
      case 2:
        puts("before");
        printf("Please enter a number to append: ");
        create_monster_attack(data, counter);
        counter++;
        puts("after");
        head = append(head, data);
        traverse(head);
        break;
      case 3:
        printf("Please enter a number to search: ");
        scanf("%d", &data->attackID);
        temp = search(head, data[counter].attackID, counter);
        if (temp != NULL) {
          printf("Element with attack ID value %d found.", data->attackID);
        } else {
          printf("Element with attack ID value %d not found.", data->attackID);
        }
        break;
      case 4:
        printf("Enter the element value after which you would like to insert the new value: ");
        scanf("%p", &data);
        temp = search(head, data[counter].attackID, counter);
        if (temp != NULL) {
          printf("Enter the value to insert: ");
          scanf("%p", &data);
          head = insert_after(head, data, temp);
          if (head != NULL)
            traverse(head);
        } else {
          printf("Element with value %p not found.", data);
        }
        break;
      case 5:
        printf("Enter the element value before which you would like to insert a new value: ");
        scanf("%p", &data);
        temp = search(head, data[counter].attackID, counter);
        if (temp != NULL) {
          printf("Enter the value to insert: ");
          scanf("%p", &data);
          head = insert_before(head, data, temp);
          
          if (head != NULL)
            traverse(head);
        } else {
          printf("Element with value %p not found.", data);
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
        scanf("%p", &data);
        temp = search(head, data[counter].attackID, counter);
        if (temp != NULL) {
          remove_any(head, temp);
          if (head != NULL)
            traverse(head);
        } else {
          printf("Element with value %p not found.", data);
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
  free(data);
  return 0;
}