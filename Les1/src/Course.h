#include <string>;

using namespace std;

class Course
{
private:
  string _nameCourse;
  string _timeDate[60] = {};

public:
  Course(string nameCourse, string timeDate[]);
  Course() = default;
};