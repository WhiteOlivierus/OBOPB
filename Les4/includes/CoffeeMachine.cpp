#include "includes/CoffeeMachine.h"

std::string CoffeeMachine::GetCoffee(BaseCoin *coin)
{
    int coinValue = coin->GetValue();

    if (coinValue == 0)
    {
        return "Please give a coin with value.";
    }

    std::vector<int> &coffeeQuantity = GetQuantity(coinValue);
    return Output(coffeeQuantity, coin->GetName());
}

std::vector<int> CoffeeMachine::GetQuantity(int coinValue)
{
    std::vector<int> out;

    for (auto coffee : coffees)
    {
        if (coinValue == -1)
        {
            out.push_back(1);
            continue;
        }

        int coffeeCost = coffee->GetCost();

        int amountOfThisCoffee = coinValue / coffeeCost;

        if (amountOfThisCoffee < 1)
            out.push_back(0);
        else
            out.push_back(amountOfThisCoffee);
    }

    return out;
}

std::string CoffeeMachine::Output(std::vector<int> &quantaties, std::string &coinType)
{
    std::string coffeeTypes;

    for (int i = 0; i < quantaties.size(); i++)
    {
        if (quantaties[i] > 1)
            coffeeTypes += ", " + std::to_string(quantaties[i]) + " " + coffees[i]->GetName() + "s";
        else if (quantaties[i] == 1)
            coffeeTypes += ", " + coffees[i]->GetName();
        else
            continue;
    }

    return coinTypeMessage + coinType + ". " + coffeeTypesMessage + coffeeTypes + ".";
}