#include <iostream>
#include <string>
#include <time.h>
// #include "Course.h";
// #include "Student.h";

using namespace std;

string RandomTimeAndDate();

int main()
{
    // Student students[10] = {
    //     Student("Bert", 27),
    //     Student("Jan", 27),
    //     Student("Louis", 27),
    //     Student("Bas", 27),
    //     Student("Daniel", 27),
    //     Student("Sander", 27),
    //     Student("John", 27),
    //     Student("Edwin", 27),
    //     Student("Lan", 27),
    //     Student("Sam", 27)};

    // string oopTimeTable[5] = {
    //     "2018-07-16T12:15",
    //     "2018-09-16T12:15",
    //     "2018-15-16T12:15",
    //     "2018-21-16T12:15",
    //     "2018-29-16T12:15"};

    // Course OOP = Course("OOP", oopTimeTable);

    string input = "";

    cout << RandomDateAndTime();

    getline(cin, input);
}

string RandomDateAndTime()
{
    string out = "";

    srand((unsigned)time(0));

    out += to_string(2018 + (std::rand() % (2020 - 2018 + 1))) + "-";

    out += to_string(1 + (std::rand() % (12 - 1 + 1))) + "-";

    out += to_string(1 + (std::rand() % (30 - 1 + 1))) + "T";

    out += to_string(9 + (std::rand() % (21 - 9 + 1))) + ":";

    out += to_string(0 + (std::rand() % (59 - 0 + 1)));

    return out;
}