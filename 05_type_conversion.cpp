#include <iostream>

int main(int argc, char const *argv[])
{
    using std::cout;

    int x = 3.1415;       // is implicit, because it will turn automatically x = 3;
    double x = (int)3.14; // is explicit, we first cast a double to integer then store as a double, finally x = 3
    char y = 100;         // with ASCII, it will be converted to letter D

    int correct = 8;
    int questions = 10;
    double score = correct / questions;         // will return 0 because the opp is done with integers
    double score = correct / (double)questions; // will return 0.8

    cout << score << '\n';

    return 0;
}
