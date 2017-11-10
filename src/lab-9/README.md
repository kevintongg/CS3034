# CS3034 — Lab 9

Write a Python application that tracks students and courses in a university.  

The class University must have methods to:
* create a course
* show all courses
* enroll a student
* find a student by id number
* find a course by course id
* enroll the student in the course
* show all students with the courses in which they are enrolled. 

Student and Course should each have a name and an id number, as well as any methods needed to support the methods required for University.  All three classes should have `__init__` and `__str__` methods.

Write a driver script that creates a few courses and at least two students, enrolls each student in two courses, and lists the students with their courses.  The output should be approximately like this:

Joseph Student, ID #1 is enrolled in:

Course # 1: English 101

Course # 3: Sociology 303

Josephine Student, ID #2 is enrolled in:

Course # 2: Statistics 202

Course # 3: Sociology 303

 