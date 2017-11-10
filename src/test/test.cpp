#include <iostream>
#include <utility>
#include <utility>
#include <vector>

using namespace std;

class Student {

public:
  Student(int id, string firstName, string lastName)
      : id(id),
        firstName(move(firstName)),
        lastName(move(lastName)) {}

  Student() = default;

  vector<Student> students;

  void addStudent(int id, const string &firstName, const string &lastName) {
    auto newStudent = new Student(id, firstName, lastName);

    students.emplace_back(newStudent);
  }

  bool checkID(int id) {

    for (Student student : students) {
      if (student.getId() == id) {
        cout << "Student found!" << endl;
        return true;
      } else {
        cout << "Student not found!" << endl;
        return false;
      }
    }
  }

  const vector<Student> &getStudents() {
    return students;
  }

  void setStudents(const vector<Student> &students) {
    Student::students = students;
  }

  const int &getId() const {
    return id;
  }

  void setId(const int &id) {
    Student::id = id;
  }

  const string &getFirstName() const {
    return firstName;
  }

  void setFirstName(const string &firstName) {
    Student::firstName = firstName;
  }

  const string &getLastName() const {
    return lastName;
  }

  void setLastName(const string &lastName) {
    Student::lastName = lastName;
  }

private:
  int id{};
  string firstName, lastName;
};


int main() {

  auto *student = new Student();

  student->addStudent(123, "Kevin", "Tong");

  student->checkID(123);
}