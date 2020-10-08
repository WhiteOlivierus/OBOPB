#include "Teacher.h"

std::string Teacher::Info()
{
    return Person::Info() + "He is " + course + " teacher.";
}