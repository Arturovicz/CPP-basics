#include <iostream>
#include <iomanip>

using string = std::string;
using std::cout, std::cin;

// we overload the func of addition
int addition(int a, int b)
{
    return a + b;
}

int addition(int a, int b, int c)
{
    return a + b + c;
}

// EXERCICE
double deposit()
{
    double amount;

    do
    {
        cout << "How much you want to deposit?\n";
        cin >> amount;
    } while (amount < 0);

    return amount;
}

double withdraw(double balance)
{
    double amount;
    do
    {
        cout << "How much you want to withdraw?\n";
        cin >> amount;
    } while (amount < 0 || amount > balance);

    balance -= amount;
    return balance;
}

void show_balance(double amount)
{
    cout << "Your balance is " << std::setprecision(2) << std::fixed << amount << '\n';
}

int main(int argc, char const *argv[])
{
    int addition_of_two = addition(1, 2);
    int addition_of_three = addition(1, 2, 3);

    cout << addition_of_two << " " << addition_of_three << '\n';

    int res;
    double balance = 0;
    double amount;

    do
    {
        cout << "******************\n";
        cout << "ENTER CHOICE \n";
        cout << "******************\n";
        cout << "1. SHOW BALANCE\n";
        cout << "2. DEPOSIT\n";
        cout << "3. WITHDRAW\n";
        cout << "4. EXIT\n";
        cin >> res;
        cin.clear();   // resets error flags
        fflush(stdin); // doesn't work, why?

        switch (res)
        {
        case 1:
            show_balance(balance);
            break;
        case 2:
            balance += deposit();
            cout << "balance: " << balance << '\n';
            break;
        case 3:
            balance = withdraw(balance);
            cout << "balance: " << balance << '\n';
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Enter a valid number (1-4)\n";
            break;
        }
    } while (res != 4);

    return 0;
}
