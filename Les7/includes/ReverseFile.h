#include <string>
#include <iostream>
#include <fstream>

class ReverseFile
{
private:
    std::string Reverse(std::string &string);

public:
    ReverseFile(std::string path);
};
