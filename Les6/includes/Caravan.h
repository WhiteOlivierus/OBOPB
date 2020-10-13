#include "includes/Suitcase.cpp"
#include "includes/Socks.cpp"

class Caravan : public Item
{
public:
    Caravan(std::string color) : Item(color, "caravan") {}
    Caravan(const Caravan &caravan) : Item(caravan) {}
    Caravan() : Item() {}
};