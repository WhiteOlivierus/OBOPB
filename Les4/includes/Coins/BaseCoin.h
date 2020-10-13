#include <string>

class BaseCoin
{
private:
    int value = 0;
    std::string name = "BaseCoin";

public:
    BaseCoin(int value = 0, std::string name = "BaseCoin") : value(value), name(name) {}

    std::string PrintValue();
    int GetValue();
    std::string GetName();
};
