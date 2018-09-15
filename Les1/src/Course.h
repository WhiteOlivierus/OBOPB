#include <string>;
#include "Student.h"

using namespace std;

class Course
{
private:
  string _nameCourse;
  string _timeDate[60] = {};
  Student _students[30] = {};

public:
  Course(string nameCourse, string timeDate[]);
  Course() = default;
  void AddStudent(Student student);
};