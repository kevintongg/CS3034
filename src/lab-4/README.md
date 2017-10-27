# CS 3034 Lab 4: Linked List
Write a C program that keeps a linked list of monster attack structs.

* Start with the linked list sample code and your monster_attack struct from Lab 3. Make all the menu options work with a linked list of monster attacks instead of ints.
* Move the menu to a separate code file, linked_list_demo.c. Leave the linked list code in linked_list.c
* Use two header files. linked_list.h should contain prototypes for all the list functions and the definition of the node struct. monster_attack.h should contain the definition of the monster_attack struct. If your linked_list_demo is fairly complex, you should also create a linked_list_demo.h header file with prototypes.
* You will need to change the node structure so that data is a pointer to a monster attack instead of a pointer to an int.
* You will need to code a way to show data for each monster attack (a function that displays the data in a way somewhat analogous to a Java toString() method.) After each menu option, you should see output for each attack, in the same way you see output for each int in the example code. You will also need to write a function to take user input for each monster attack. You will probably need to use strncpy to copy the input strings to the strings in the struct.
* Use malloc() to allocate space on the heap for each monster attack. You may use char arrays with fixed lengths for the monster name and attack location in your struct. However, if you want to refine this a little, try this: use char pointers for the strings in the struct, take the strings from input and find the \0 to locate the end of each string, and use malloc() to allocate space for the strings based on the actual lengths of the input strings.
*The search function should search for a monster attack by its id. Similarly, the insert before and insert after functions should insert before or after attacks based on their ids.

Turn in your code and a screenshot of the output from a sample run.