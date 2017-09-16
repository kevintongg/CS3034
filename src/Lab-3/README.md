# CS 3034 Lab 3: Structs and malloc()

Write a C program that meets the following requirements:

* Defines a struct that represents information about a monster attack, including the attack id number, the name of the monster, the location of the attack, and the number of victims.
* Creates an array of attacks on the heap, not the stack, using malloc().
* Uses a separate function (not main) to take user input for the array of attacks. Ask the user for the number of attacks first, then create the array of that length and use a loop to take input for each attack. It is OK in this lab if the program can not correctly handle a monster name or location that includes whitespace (eg, "Jersey Devil"). However, when you take the input, use a length parameter for each string to ensure that you do not take more input than the string (which is an array of chars in memory) can hold. Use array subscripts here, and set the id number to the array subscript plus 1 (eg, the first attack is attack #1.) This function may take a pointer as a parameter and return the length of the array, but you may also use some other way to track the size of the arrray,
* Uses a separate function to print out information for each attack. This function should take a pointer to the array and the length of the array as parameters. Use a loop that uses pointer arithmetic, rather than array subscripts, to step through the array.
* Uses a separate function tha takes the same parameters as the print function and calculates and prints the total number of victims for all attacks.
* Compiles successfully with gcc in Fedora 26 as c11 (This requirement will be understood and not restated for future C labs)