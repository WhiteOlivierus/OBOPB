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