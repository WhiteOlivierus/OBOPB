#include <string>
#include <iostream>

class Teacher : public Person
{
private:
    std::string course;

public:
    Teacher(int age, std::string name, std::string course) : Person(age, name)
    {
        this->course = course;
    }
    std::string Info();
};
