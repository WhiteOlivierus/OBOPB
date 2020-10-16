#include <iostream>
#include "includes/CoffeeMachine.cpp"

int main(int argc, char const *argv[])
{
    CoffeeMachine coffeeMachine = CoffeeMachine();

    std::vector<BaseCoin *> coins = {new BaseCoin, new FiftyCents, new Euro, new CoffeeCoin};

    //Debugging
    // std::vector<BaseCoffee *> coffees = {new BaseCoffee, new Espresso, new Latte};

    // for (auto coin : coins)
    // {
    //     std::cout << coin->PrintValue() << std::endl;
    // }

    // for (auto coffee : coffees)
    // {
    //     std::cout << coffee->PrintCost() << std::endl;
    // }
    // End debugging

    for (auto coin : coins)
    {
        std::cout << coffeeMachine.GetCoffee(coin) << std::endl;
    }

    return 0;
}
