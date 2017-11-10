from .university import University


class Student:
    def __init__(self, name=None, student_id=None):
        self._name = name
        self._student_id = student_id

    @property
    def name(self):
        return self._name

    @name.setter
    def name(self, name):
        self._name = name

    @name.deleter
    def name(self):
        del self._name

    @property
    def student_id(self):
        return self._student_id

    @student_id.setter
    def student_id(self, student_id):
        self._student_id = student_id

    @student_id.deleter
    def student_id(self):
        del self.student_id

    def find_student(self, student_id):
        for i in range(len(University.students)):
            if i == student_id:
                return self.name
            else:
                return False

    def __str__(self):
        return "Student ID #" + self.student_id + ": " + self.name + " is enrolled in:"
