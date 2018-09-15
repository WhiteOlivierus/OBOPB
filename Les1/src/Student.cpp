#include <string>;
#include "Student.h";

Student::Student(string nameStudent, int age)
{
    _nameStudent = nameStudent;
    _age = age;
}

void Student::AddCourse(Course course)
{
    for (int i; i < sizeof(_courses); i++)
    {
        if (_courses != nullptr)
        {
            _courses[i] = course;
        }
    }
}