#include <string>;
#include "Course.h";

using namespace std;

class Student
{

private:
  string _nameStudent;
  int _age;
  Course _courses[60] = {};

public:
  Student(string nameStudent, int age);
  void AddCourse(Course course);
};