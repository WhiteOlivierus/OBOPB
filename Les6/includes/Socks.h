#include <string>

class Socks : public Item
{
public:
    Socks(std::string color) : Item(color, "Socks") {}
    Socks() : Item() {}
};
