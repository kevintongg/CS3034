# CS 3034 Lab 6: C++ OOP
Important: this application must use C++ style IO (in this case, cout), not C-style IO (scanf, printf, etc).

For this lab you will create an application that models a payroll system. The application will require you to write at least three classes, as well as a driver. Write whatever contructors, getters, setters, or other methods you need to make the classes work as required. Read the whole assignment before you start planning your solution or writing code.

#### Employee

Each object of the Employee class represents one employee. Each employee has a string employeeId, which consists of a capital E followed by a four digit integer (for example, E12345). Each employee also has a first name, a last name, an hourly wage, and an int variable that records the number of hours he or she has worked during this pay period. The constructor can take the employeeID as an argument; you do not have to write code to generate employee ids. Employee will also need a calcPay() function, which returns the number of hours worked times the hourly wage.

#### Paycheck
The Paycheck class represents a single paycheck for one employee. It needs a constructor and variables for the paycheck amount and the employee's id number, first name, and last name. The constructor should take the id number, names, and pay amount as parameters; it should not take an Employee as a parameter. This class also requires a function that returns a string representation of the paycheck, eg 
Paycheck for $666.75 issued to Jerry Jones, employee # E12345

#### PayrollSystem
The PayrollSystem class represents the payroll information for a company. The data includes information on the name of the company and a vector of employees (objects of class Employee). PayrollSystem will need functions to add a new employee to the payroll, to find an employee by id number and remove him/her from the employee vector (look up vector's erase() function), to find an employee by id number and record the hours s/he worked during the current pay period, and to issue paychecks to all employees (that is, to each employee in the vector). The function to add an employee to the payroll should take information about the employee as parameters and use this data in a call to Employee's constructor; it should not take an Employee as a parameter. The easiest way to record hours worked for an employee is to search the vector for the employee with a particular id and then call an appropriate function in the Employee class. A paycheck is issued by calling the calcPay() function of the correct employee, creating a Paycheck with the appropriate data, getting a string representation of the Paycheck object, and printing the string. Remember to set the hours worked for each employee to 0 after his/her paycheck is issued. The first few lines of output from a paycheck run should look approximately like this:

```
Payroll for Ace Peat Moss Inc.:
Paycheck for $839.59 issued to E0001 Mary Smith
Paycheck for $666.75 issued to E0002 Jerry Jones
```

#### Driver
The driver in this case represents a company's bookkeeper using the payroll system. It is important that the user does not have to understand how the system is implemented, only how to use a few functions from PayrollSystem. The driver should not directly call any functions from Paycheck or Employee.

The driver does not have to be a class or member function of a class; it can simply be a main() function in a cpp source file. It should create an object of class PayrollSystem, then add at least four employees, record their hours worked, issue paychecks, delete an employee, and then record new hours worked and issue another set of paychecks. All the input can be hard coded in this driver; you do not need to provide a way to get user input.
