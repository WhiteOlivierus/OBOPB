#include <iostream>
#include "includes/Person.cpp"
#include "includes/Student.cpp"
#include "includes/Teacher.cpp"

int main(int argc, char const *argv[])
{
    Person person(18, "Jonh Do");
    Student student(20, "Jonathan Doo", 1);
    Teacher teacher(51, "Jonhy Dodo", "Maths");

    std::cout << person.getName() << std::endl;
    std::cout << student.getName() << std::endl;
    std::cout << teacher.getName() << std::endl;

    std::cout << person.Info() << std::endl;
    std::cout << student.Info() << std::endl;
    std::cout << teacher.Info() << std::endl;

    return 0;
}
