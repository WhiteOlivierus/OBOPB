#include <string>
#include <iostream>

class Person
{
protected:
    int age;
    std::string name;

public:
    Person(int age, std::string name);

    int getAge();
    std::string getName();

    virtual std::string Info();
};
