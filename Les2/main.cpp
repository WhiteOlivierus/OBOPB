#include <iostream>
#include <vector>
#include "include/SimonSays.cpp"

int main(int argc, char const *argv[])
{
    SimonSays simon(2);

    do
    {
        simon.AddNumber();

        simon.PrintNumbers();

        simon.HandleInput();

    } while (simon.CheckInput());

    std::cout << simon.Result();

    return 0;
}