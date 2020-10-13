#include <string>

class BaseCoffee
{
private:
    int cost = 50;
    std::string name = "BaseCoffee";

public:
    BaseCoffee(int cost = 50, std::string name = "BaseCoffee") : cost(cost), name(name) {}

    std::string PrintCost();
    int GetCost();
    std::string GetName();
};
