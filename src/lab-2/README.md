# CS 3034 Lab 2: Pointers, Arrays, and Functions

Write a C program that meets the following requirements:

1. Uses a header file for prototypes of functions other than main()
2. Contains a void function that takes as arguments a pointer to an array of doubles and the length of the array, and prints out the values in the array with a loop using pointer arithmetic
3. Contains a void function that takes as arguments a pointer to an array of doubles and the length of the array, and takes user input for the values in the array
4. Contains a void function that takes a pointer to an array and the length of the array, and replaces all values in the array with their reciprocals
5. Contains a main() that does the following:
* Creates an array of ten doubles
* Calls the input function
* Calls the print function
* Makes a copy of the array (if you don't see why the copy has to be made in main, do it in the reciprocal function and see what happens)
* Calls the change-to-reciprocal function on one of the arrays
* Calls the print function on the original array, then on the array of reciprocal values
6. Compiles successfully with gcc in Fedora 26 as c11 (This requirement will be understood and not restated for future C labs)
