#include "includes/WeaveFile.h"

WeaveFile::WeaveFile(std::string pathOne, std::string pathTwo)
{
    std::ifstream inputFileOne(pathOne);
    std::ifstream inputFileTwo(pathTwo);

    std::ofstream outputFile("output/WeavedFile.txt");

    if (!inputFileOne.is_open(),
        !inputFileTwo.is_open(),
        !outputFile.is_open())
        throw "Unable to open file";

    bool fileOneEof = false;
    bool fileTwoEof = false;

    while (!fileOneEof || !fileTwoEof)
    {
        fileOneEof = AddLine(inputFileOne, outputFile, fileOneEof);
        fileTwoEof = AddLine(inputFileTwo, outputFile, fileTwoEof);
    }

    inputFileOne.close();
    inputFileTwo.close();

    outputFile.close();
}

bool WeaveFile::AddLine(std::ifstream &in, std::ofstream &out, bool eof)
{
    std::string line;

    getline(in, line);

    if (!line.empty() && !eof)
    {
        std::cout << line << std::endl;
        out << line << std::endl;
    }

    return in.eof();
}