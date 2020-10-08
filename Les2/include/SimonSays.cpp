#include "include/SimonSays.h"

SimonSays::SimonSays(const int startCount)
{
    srand((unsigned)time(NULL));
    InitRandomNumbers(startCount);
}

void SimonSays::InitRandomNumbers(int count)
{
    for (int i = 0; i < count; i++)
    {
        AddNumber();
    }
}

void SimonSays::AddNumber()
{
    int randomNumber = rand() % 9 + 0;
    randomNumbers.push_back(randomNumber);
    count++;
}

void SimonSays::PrintNumbers()
{
    Print(randomNumbers);

    Sleep(3000);

    system("cls");
}

void SimonSays::Print(std::vector<int> path)
{
    for (auto i : path)
        std::cout << i << ' ';
    std::cout << std::endl;
}

void SimonSays::HandleInput()
{
    inputNumbers.clear();

    int input;
    std::cin >> input;

    while (input > 0)
    {
        inputNumbers.insert(inputNumbers.begin(), input % 10);
        input /= 10;
    }
}

bool SimonSays::CheckInput()
{
    Print(randomNumbers);
    Print(inputNumbers);

    return randomNumbers == inputNumbers;
}

std::string SimonSays::Result()
{
    std::string text = "Simon says that you made it to  ";
    text += std::to_string(count) + " numbers.";
    return text;
}