#include "Person.h"

Person::Person(int age, std::string name)
{
    Person::age = age;
    Person::name = name;
}

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
    return "This is " + name + ".";
}