#include <string>;
#include "Course.h";

Course::Course(string nameCourse, string timeDate[])
{
    _nameCourse = nameCourse;
    for (int i; i < sizeof(timeDate); i++)
    {
        _timeDate[i] = timeDate[i];
    }
}

void Course::AddStudents(Student student)
{
    for (int i; i < sizeof(_students); i++)
    {
        if (_students != nullptr)
        {
            _students[i] = student;
        }
    }
}