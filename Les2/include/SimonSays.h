#include <iostream>
#include <vector>
#include <time.h>
#include <Windows.h>
#include <string>

class SimonSays
{
private:
    void SimonSays::Print(std::vector<int> path);

    std::vector<int> randomNumbers;
    std::vector<int> inputNumbers;

    int count = 0;

public:
    SimonSays(const int startCount);

    void InitRandomNumbers(int count);
    void AddNumber();
    void PrintNumbers();
    void HandleInput();
    bool CheckInput();
    std::string Result();
};