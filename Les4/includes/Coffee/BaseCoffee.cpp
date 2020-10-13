#include "includes/Coffee/BaseCoffee.h"

std::string BaseCoffee::PrintCost()
{
    return "The cost is " + std::to_string(cost) + ".";
}

int BaseCoffee::GetCost()
{
    return cost;
}
std::string BaseCoffee::GetName()
{
    return name;
}