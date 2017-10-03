// from zentut.com, heavily adapted

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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
  
  printf("\nEntering information about Monster #%d\n", counter);
  puts("Location of the attack?");
  fgets(data[counter].location, sizeof(data->location), stdin);
  puts("Name of the monster?");
  fgets(data[counter].name, sizeof(data->name), stdin);
  puts("How many victims for this attack?");
  scanf("%i", &data[counter].victims);
  
  clean_stdin();
  
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
  new_node->monster = data;
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
  if (head == NULL) head = create(data, head);
  else {
    /* go to the last node */
    node *cursor = head;
    while (cursor->next != NULL)
      cursor = cursor->next;
    
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
void traverse(node *head, int counter) {
  node *cursor = head;
  while (cursor != NULL) {
    display(cursor, counter);
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
void  display(node *n, int counter) {
  if (n != NULL) {
    /*
     *
     * Could also display all the data here
     * but already made a function to print
     * the linked list
     *
     * Commented for if I did not have a print
     * function
     *
     */
//    printf("\nAttack #: %i\n", n->data->attackID);
//    printf("Location: %s\n", n->data->location);
//    printf("Name: %s\n", n->data->name);
//    printf("Victims: %i\n", n->data->victims);
    printf("\nAttack ID: %i\n", n->monster->attackID);
    n->monster++;
  }
}

/*
    Search for a specific node with input data
 
    return the first matched node that stores the input data,
    otherwise return NULL
*/
node *search(node *head, int id) {
  
  node *cursor = head;
  while (cursor != NULL) {
    if (cursor->monster->attackID == id) {
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
  node *cursor, *tmp;
  
  if (head != NULL) {
    cursor = head->next;
    head->next = NULL;
    while (cursor != NULL) {
      tmp = cursor->next;
      free(cursor);
      cursor = tmp;
    }
  }
}

/*
    return the number of elements in the list
*/
int count(node *head) {
  node *cursor = head;
  int counter = 0;
  while (cursor != NULL) {
    counter++;
    cursor = cursor->next;
  }
  return counter;
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
      if (e->monster->attackID > head->monster->attackID) {
        y = head;
        while ((y->next != NULL) && (e->monster->attackID > y->next->monster->attackID)) {
          y = y->next;
        }
        e->next->monster->attackID = y->next->monster->attackID;
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

void print_list(monster *data, int n) {
  for (int i = 0; i < n; ++i) {
    printf("\nAttack ID: %i\n\n", data->attackID);
    printf("Location: %s\n", data->location);
    printf("Name: %s\n", data->name);
    printf("Victims: %i\n", data->victims);
  }
}
