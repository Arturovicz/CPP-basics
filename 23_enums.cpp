#include <iostream>

using std::string, std::cout, std::cin;

enum Day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6 // those are explicit, it does 0 to 6 either way if we dont assign them
};

int main(int argc, char const *argv[])
{
    Day today = sunday;
    switch (today)
    {
    case sunday:
        cout << "Today is " << today << '\n';
        break;
    case monday:
        cout << "Today is " << monday << '\n';
        break;
    default:
        break;
    }
    return 0;
}
