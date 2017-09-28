# CS 3034 Lab 5: Generic Linked List Without OOP

Important: this application must compile using the std=c11 option. The current lectures are about C++, but this is a C lab.

Write code to keep a generic linked list. This linked list will be able to store any kind of struct that has an int id field.

* Start with your work from Lab 3. Review the lecture slides on function pointers and the function pointer example code that is linked from the course web page.
* You will need to change the node structure so that data is a void pointer rather than a pointer to a monster_attack. Your linked list code should have no references to monster_attack
* The linked list code will need function pointers to functions that
  * Display the information on an instance of the specific struct type used in a list.
  * Take data from user input and use it to create a struct of the specific struct type on the heap (use malloc()) and return a pointer to the struct
  * Return the id of an instance of the specific struct type. You may assume that every struct type you can use with the list has an int id.
* Creating a linked list of, for example, monster_attacks will consist of assigning appropriate functions for the function pointers. This is similar to the technique of coding to hooks provided by an application framework. Write a function that takes pointers to the type-specific functions as parameters and assigns them as the values of the function pointers in the generic linked list code. The difference between linked lists of, for example, monster_attacks and savings_accounts is that in the first case you write and pass in methods that work for monster_attacks and in the second you write and pass in functions that work with savings_accounts.
* Write two additional .c files. One set of files will provide the functions needed for a linked list of monster_attacks. The other will provide those needed for a linked list of some type of struct of your own design. Your struct should be defined in an .h file. It must have an int id. Create other data fields to your liking, but don't make it too complicated.
* Let the user choose at runtime which type of linked list (monster_attack or, for example, savings_account) s/he wants. This is easiest to accomplish if main() is in the menu file.