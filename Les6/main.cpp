#include <iostream>

#include "includes/Caravan.cpp"

int main(int argc, char const *argv[])
{
    Caravan *caravan = new Caravan("Blue");
    Suitcase *suitcase = new Suitcase("Red");
    Socks *socks = new Socks("Green");

    std::cout << "Packed the caravan." << std::endl;

    suitcase->AddItem(socks);
    caravan->AddItem(suitcase);

    std::cout << "Showing everything in the caravan." << std::endl;

    caravan->ShowContents();

    Caravan *stolenCaravan = new Caravan(*caravan);

    std::cout << "Stealing the caravan" << std::endl;

    delete caravan;

    std::cout << "Showing everything in the stolen caravan." << std::endl;

    stolenCaravan->ShowContents();

    delete stolenCaravan;

    return 0;
}
