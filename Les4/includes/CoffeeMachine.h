#include "includes/Coins/BaseCoin.cpp"
#include "includes/Coins/FiftyCents.cpp"
#include "includes/Coins/Euro.cpp"
#include "includes/Coins/CoffeeCoin.cpp"

#include "includes/Coffee/BaseCoffee.cpp"
#include "includes/Coffee/Espresso.cpp"
#include "includes/Coffee/Latte.cpp"

#include <map>
#include <string>
#include <vector>

class CoffeeMachine
{
private:
    const std::string coinTypeMessage = "You have paid with a ";
    const std::string coffeeTypesMessage = "With this coin you can get";

    const std::vector<BaseCoffee *> coffees = {new BaseCoffee, new Latte, new Espresso};

    std::vector<int> GetQuantity(int coinValue);
    std::string Output(std::vector<int> &quantaties, std::string &coinType);

public:
    std::string GetCoffee(BaseCoin *coin);
};
