#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct node {
  int data;
  struct node *next;
} node;


/*
    create a new node
    initialize the data and next field
 
    return the newly created node
*/
node *create(int data, node *next);

/*
    add a new node at the beginning of the list
*/
node *prepend(node *head, int data);

/*
    add a new node at the end of the list
*/
node *append(node *head, int data);

/*
    insert a new node after the prev node
*/
node *insert_after(node *head, int data, node *prev);

/*
    insert a new node before the nxt node
*/
node *insert_before(node *head, int data, node *nxt);

/*
    traverse the linked list
*/
void traverse(node *head);

/*
    remove node from the front of list
*/
node *remove_front(node *head);

/*
    remove node from the back of the list
*/
node *remove_back(node *head);

/*
    remove a node from the list
*/
node *remove_any(node *head, node *nd);

/*
    display a node
*/
void display(node *n);

node *search(node *head, int data);

/*
    remove all element of the list
*/
void clear(node *head);

/*
    return the number of elements in the list
*/
int count(node *head);

/*
    sort the linked list using insertion sort
*/
node *insertion_sort(node *head);

/*
    reverse the linked list
*/
node *reverse(node *head);

void print_list();

#endif
