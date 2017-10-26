# CS 3034 Lab 7 – C++ Inheritance

**Write an application that models a brutal war for survival among small animals.**

* All the animals in this lab inherit from the abstract class Animal. Animal has a name and a weight in grams. It has a public function eat(), which takes a double parameter that represents the weight in grams of a food item and adds that much to the animal's weight. It also has a call() function. Since different animals have different calls, call() must be a pure virtual function. Animal also needs a virtual << operator.
* The abstract class Prey inherits from Animal and adds a flee() function. Since different Prey animals flee differently, this must be a pure virtual function.
* The abstract class Predator is a subclass of Animal which also has a pure virtual predate() function. Predate() takes a reference to a Prey animal (one that extends Prey) as its parameter.
* The concrete class Cat inherits from predator and implements call() by showing a message like "Fifi says 'Meow'". It also overrides the << operator to show a message like "Fifi is a Cat weighing 982.3 grams." Its predate() function shows a message like "Fifi pounces and devours Bambi, who weighs 6234 grams" using the actual names of the cat and the Prey animal and the actual weight of the Prey. Cat's call() method prints out the name of the cat and the message "says Meow!" Predate then calls the eat() function using the weight of the Prey animal as the double argument. Cat also has an overloaded friend << operator that shows a message like "Fifi is a cat weighing 501 grams"
* Bird and Mouse are concrete subclasses of Prey. They implement flee() by printing messages that show how Birds and Mice flee (for example, "Minnie scurries off"). They also implement call() by printing messages like "Donald says 'tweet.'"
* It is up to you to decide where to put constructors, getters, setters, and any other necessary methods.
* Write a driver method that does the following:
  * creates a Cat on the heap and calls its overloaded << operator and its call function
  * creates a vector of pointers to Prey, creates at least two Birds and at least two Mice on the heap, and adds pointers to the Prey to the vector
  * iterates through the vector. For each Prey animal, calls the Prey's call() function, generates a random number between 0 and 1, and, if the number is less than .5, calls the Cat's predate() method with the prey as parameter, otherwise calls the Prey's flee() method.
  
Here is a sample of the output of my solution:

	Precious is a cat and weighs 1223.34 grams.
	Precious says 'meow!'
	Mickey says 'eek!'
	Mickey scampers off
	Minnie says 'eek!'
	Precious pounces and eats Minnie, who weighs 22.3 grams 
	Daisy says 'tweet!'
	Precious pounces and eats Daisy, who weighs 69.23 grams 
	Donald says 'tweet!'
	Donald flies away
