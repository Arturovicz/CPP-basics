#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    using std::cout, std::cin;
    using string = std::string;
    srand(time(0)); // uses time for generation, write NULL if not

    int num = (rand() % 100) + 1; // if we want number between 0 and 100
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    cout << num << '\n';

    switch (dice1)
    {
    case 1:
        cout << "RACISM" << '\n';
        break;
    case 2:
        cout << "SEXISM" << '\n';
        break;
    case 3:
        cout << "HOMOPHOBE" << '\n';
        break;
    case 4:
        cout << "MYSANDER" << '\n';
        break;
    case 5:
        cout << "GENOCIDER" << '\n';
        break;
    case 6:
        cout << "NORMAL PERSON" << '\n';
        break;
    }

    // ***GUESSING GAME***

    int to_guess = rand() % 3 + 1;
    int res;
    int tries = 3;
    cout << "******GUESSING_GAME******\n";
    cout << "YOU MUST GUESS THE NUMBER BETWEEN 1 and 3\n";
    cout << "IF YOU GUESSED, YOU WILL WIN A PRIZE\n";
    for (int i = 0; i < tries; i++)
    {
        do
        {
            cout << "ENTER VALID NUMBER (1-3)\n";
            cin >> res;
        } while (res < 0 || res > 3);
        if (res != to_guess)
        {
            cout << "MINCE, YOU GAINED NONE\n";
        }
        else
        {
            switch (res)
            {
            case 1:
                "CONGRATS YOU WON A SHEMALE\n";
                break;
            case 2:
                "CONGRATS YOU WON A MALE\n";
                break;
            case 3:
                "CONGRATS YOU WON A FEMALE\n";
                break;
            default:
                "NO CONGRATS\n";
                break;
            }
        }
    }

    return 0;
}
