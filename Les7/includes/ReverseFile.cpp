#include "includes/ReverseFile.h"

ReverseFile::ReverseFile(std::string path)
{
    std::ifstream inputFile(path);
    std::ofstream outputFile("output/ReversedFile.txt");

    if (!inputFile.is_open(),
        !outputFile.is_open())
        throw "Unable to open file";

    std::string line;

    while (getline(inputFile, line))
    {
        std::reverse(line.begin(), line.end());

        // Option 1
        std::cout << line << std::endl;
        // Option 2
        std::cout << Reverse(line) << std::endl;

        outputFile << line << std::endl;
    }

    inputFile.close();

    outputFile.close();
}

std::string ReverseFile::Reverse(std::string &string)
{
    std::string out;
    for (auto &letter : string)
        out.push_back(letter);
    return out;
}