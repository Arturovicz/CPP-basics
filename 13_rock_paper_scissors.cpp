#include <iostream>
#include <ctime>
#include <iomanip>
#include <cctype>

using string = std::string;
using std::cout, std::cin;

char getUserChoice();
char getComputerChoice();
void chooseWinner(char user, char computer);

int main(int argc, char const *argv[])
{
    int if_plays;
    cout << "***ROCK, PAPER, SCISSORS***\n";
    cout << "Welcome Player, choose the value\n";

    do
    {
        cout << "(1) PLAY\n";
        cout << "(2) EXIT\n";
        cin >> if_plays;
        char user_res = getUserChoice();
        char comp_res = getComputerChoice();
        cout << user_res << '\n';
        cout << comp_res << '\n';
        chooseWinner(user_res, comp_res);
    } while (if_plays != 2);

    return 0;
}

char getUserChoice()
{
    char res;
    do
    {
        cout << "Choose between (R)ock, (P)aper, (S)cissors\n";
        cin >> res;
        res = toupper(res);
    } while (res != 'R' && res != 'P' && res != 'S');

    switch (res)
    {
    case 'R':
        return 'R';
        break;
    case 'P':
        return 'P';
        break;
    case 'S':
        return 'S';
        break;
    }

    return 0;
}

char getComputerChoice()
{
    srand(time(NULL));
    int num = (rand() % 3) + 1;
    switch (num)
    {
    case 1:
        return 'R';
        break;
    case 2:
        return 'P';
        break;
    case 3:
        return 'S';
        break;
    default:
        return 'E';
        break;
    }
    return 0;
}

void chooseWinner(char user, char computer)
{
    if (user == computer)
    {
        cout << "DRAW\n";
    }
    else
    {
        switch (user)
        {
        case 'R':
            if (computer == 'P')
            {
                cout << "Computer chose Paper, you lost :/\n";
            }
            else if (computer == 'S')
            {
                cout << "Computer chose Scissors, you won :) \n";
            }
            break;
        case 'P':
            if (computer == 'R')
            {
                cout << "Computer chose Rock, you won :) \n";
            }
            else if (computer == 'S')
            {
                cout << "Computer chose Scissors, you lost :/ \n";
            }
            break;
        case 'S':
            if (computer == 'R')
            {
                cout << "Computer chose Rock, you lost :/ \n";
            }
            else if (computer == 'P')
            {
                cout << "Computer chose Paper, you won :) \n";
            }

        default:
            break;
        }
    }
}
