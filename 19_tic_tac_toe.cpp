#include <iostream>
#include <ctime>

using std::string, std::cout, std::cin;

void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void compMove(char *spaces, char comp);
bool checkWinner(char *spaces, char player, char comp);
bool checkTie(char *spaces);

int main(int argc, char const *argv[])
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char comp = 'O';
    bool running = true;

    cout << "--------------------------------\n";
    cout << "Welcome to TicTacToe game\n";
    cout << "--------------------------------\n";
    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player, comp))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
        compMove(spaces, comp);
        drawBoard(spaces);
        if (checkWinner(spaces, player, comp))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
    }

    return 0;
}

void drawBoard(char *spaces)
{
    cout << '\n';
    cout << "     1     2     3  \n";
    cout << "  _________________\n";
    cout << "       |     |     " << '\n';
    cout << "1   " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << '\n';
    cout << "  _____|_____|_____" << '\n';
    cout << "       |     |     " << '\n';
    cout << "2   " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << '\n';
    cout << "  _____|_____|_____" << '\n';
    cout << "       |     |     " << '\n';
    cout << "3   " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << '\n';
    cout << "  _____|_____|_____" << '\n';
    cout << '\n';
}
void playerMove(char *spaces, char player)
{
    int number;
    do
    {
        cout << "Entrer a spot to place X (1-9): ";
        cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = 'X';
            break;
        }
        else
        {
            cout << "Wrong digit\n";
        }

    } while (!number > 0 || !number < 8);
}
void compMove(char *spaces, char comp)
{
    int num;
    srand(time(0));
    do
    {
        num = (rand() % 8) + 1;

    } while (spaces[num] != ' ');
    cout << num << '\n';
    spaces[num] = comp;
}
bool checkWinner(char *spaces, char player, char comp)
{
    // ROWS
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
    }
    else if ((spaces[3] != ' ') && (spaces[4] == spaces[3]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
    }

    else if ((spaces[0] != ' ') && (spaces[4] == spaces[0]) && (spaces[8] == spaces[4]))
    {
        spaces[0] == player ? cout << "YOU WIN\n" : cout << "YOU LOSE\n";
    }
    /*
    ENORMOUS QUANTITY OF IF-ELSE
    */
    return 0;
}
bool checkTie(char *spaces)
{
    for (size_t i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }
    cout << "TIE\n";
    return true;
}
