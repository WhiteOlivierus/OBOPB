#include "includes/Coins/BaseCoin.h"

std::string BaseCoin::PrintValue()
{
    return "This coin has a value of " + std::to_string(value);
}

int BaseCoin::GetValue()
{
    return value;
}

std::string BaseCoin::GetName()
{
    return name;
}