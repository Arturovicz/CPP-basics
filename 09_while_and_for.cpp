#include <iostream>

int main(int argc, char const *argv[])
{
    using std::cout, std::cin;
    using string = std::string;

    string res;
    cout << "Enter name\n";
    cin >> res;

    // WHILE LOOP
    while (res.empty())
    {
        cout << "Enter a valid value\n";
        cin >> res;
    }

    // DO WHILE LOOP
    int number;
    cout << "Enter a positive number\n";
    cin >> number;
    do
    {
        cout << "Enter a positive number, I asked\n";
        cin >> number;
    } while (number < 0);

    // FOR LOOP

    for (int i = 0; i < 10; i++)
    {
        cout << i << '\n';
    }

    // FOR EACH LOOP

    string guys[] = {"Valerij", "Ashotik", "Miguaz"};

    for (string guy : guys)
    {
        cout << guy << '\n';
    }

    return 0;
}
