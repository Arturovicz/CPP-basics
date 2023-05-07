#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    using std::cout, std::cin;
    using string = std::string;

    // IF-ELSE STATEMENTS
    int age;

    cout << "What is your age?" << '\n';
    cin >> age;
    if (age<0 | age> 130)
    {
        cout << "You not born\n";
    }
    else if (age < 18)
    {
        cout << "You cant enter\n";
    }

    else
    {
        cout << "Your can enter\n";
    }

    bool res;
    // TERNARY OPPS
    cout << "Are you man?" << '\n';
    cin >> res;
    !res ? cout << "Underaged\n" : cout << "You may enter\n";

    // SWITCH STATEMENT
    char opp;
    cout << "CALCULATOR \n ENTER A OPERAND FOR numbers 4 and 5\n";
    cin >> opp;
    switch (opp)
    {
    case '+':
        cout << 4 + 5;
        break;
    case '-':
        cout << 4 - 5;
        break;
    case '*':
        cout << 4 * 5;
        break;
    case '/':
        cout << 4 / 5;
    default:
        cout << "Invalid input, enter a valid operand";
    }

    return 0;
}
