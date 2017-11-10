import sys

from .course import Course
from .student import Student


class University:
    students = None

    def __init__(self):
        self._students = []
        self._courses = []
        self._enrolled = []

    @property
    def students(self):
        return self._students

    @students.setter
    def students(self, students):
        pass

    @students.deleter
    def students(self):
        pass

    @property
    def courses(self):
        return self._courses

    @courses.setter
    def courses(self, value):
        pass

    @courses.deleter
    def courses(self):
        pass

    def __str__(self):
        pass

    def create_course(self, name, course_id):
        self._courses.append(Course(name, course_id))

    def list_courses(self):
        for i in self.courses:
            print(i)

    def create_student(self, name, student_id):
        self._students.append(Student(name, student_id))


def main():
    university = University()

    university.create_course("English", 101)
    university.list_courses()


if __name__ == '__main__':
    main()
