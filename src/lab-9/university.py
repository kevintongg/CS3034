class University:
    def __init__(self, student_name, student_id, course_id, course_name):
        self._students = []
        self._courses = []
        self._student_name = student_name
        self._student_id = student_id
        self._course_id = course_id
        self._course_name = course_name

    def __str__(self):
        return self._student_name + ", " + "Student ID #" + str(self._student_id) + " is enrolled in:\nCourse #" + str(
            self.student_id) + ": " + self.course_name + "\n"

    def find_student(self, id):
        for i in range(len(self._students)):
            if i. == self._student_id:

    def get_students(self):
        return self._students

    def get_student_id(self):
        return self._student_id