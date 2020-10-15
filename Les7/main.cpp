#include "includes/ReverseFile.cpp"
#include "includes/WeaveFile.cpp"

int main(int argc, char const *argv[])
{
    ReverseFile *reverseFile = new ReverseFile("input/ToReverse.txt");

    WeaveFile *weaveFile = new WeaveFile("input/ToWeaveInput1.txt",
                                         "input/ToWeaveInput2.txt");

    return 0;
}
