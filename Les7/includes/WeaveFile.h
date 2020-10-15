#include <string>
#include <iostream>
#include <fstream>

class WeaveFile
{
private:
    bool AddLine(std::ifstream &in, std::ofstream &out, bool eof);

public:
    WeaveFile(std::string pathOne, std::string pathTwo);
};
