#include <string>
#include <vector>

#include "includes/Item.cpp"

class Suitcase : public Item
{
public:
    Suitcase(std::string color) : Item(color, "suitcase") {}
    Suitcase() : Item() {}
};
