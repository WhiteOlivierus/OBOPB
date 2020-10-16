#include "Person.h"

Person::Person(int age, const std::string &name) : age(age), name(name) {}

int Person::getAge()
{
    return age;
}

std::string Person::getName()
{
    return name;
}

std::string Person::Info()
{
    return "This is " + name + ". ";
}