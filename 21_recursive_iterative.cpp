#include <iostream>

using std::string, std::cout, std::cin;

// recursive is cleaner than interative
// recursive is better for sorting and searching algos
// interative uses less memory and is faster

void walk(int steps);

int main(int argc, char const *argv[])
{
    walk(10);
    return 0;
}

void walk(int steps)
{
    // ITERATIVE APPROACH
    for (int i = 0; i < steps; i++)
    {
        cout << "You took the step #" << i + 1 << '\n';
    }

    // RECURSIVE APPROACH
    if (steps > 0)
    {
        cout << "You took a step\n";
        walk(steps - 1);
    }
}

int factorial(int till)
{
    int num = 1;
    // ITERATIVE APPROACH
    for (int i = 1; i < till; i++)
    {
        num *= i;
    }

    // RECURSIVE APPROACH
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}