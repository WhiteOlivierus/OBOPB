#include "Student.h"

std::string Student::Info()
{
    return Person::Info() + "He is in grade " + std::to_string(grade) + '.';
}