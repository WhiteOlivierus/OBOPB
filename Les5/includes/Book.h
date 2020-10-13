#include <string>

class Book
{
private:
    std::string name;

public:
    Book(std::string name = "") : name(name) {}

    std::string &GetName();
};
