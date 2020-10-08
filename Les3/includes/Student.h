#include <string>
#include <iostream>

class Student : public Person
{
private:
    int grade;

public:
    Student(int age, std::string name, int grade) : Person(age, name)
    {
        this->grade = grade;
    }

    std::string Info();
};
