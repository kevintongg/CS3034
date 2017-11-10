class Course():

    def __init__(self, name, course_id):
        self._name = name
        self._course_id = course_id

    @property
    def name(self):
        return self._name

    @name.setter
    def name(self, name):
        self._name = name

    @name.deleter
    def name(self):
        pass

    @property
    def course_id(self):
        return self._course_id

    @course_id.setter
    def course_id(self, course_id):
        self._course_id = course_id

    @course_id.deleter
    def course_id(self):
        pass

    def __str__(self):
        return "Course #" + self.course_id + ": " + self.name
