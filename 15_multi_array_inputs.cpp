#include <iostream>

using std::cout, std::cin, std::string;

int main(int argc, char const *argv[])
{
    string foods[5];
    int size = sizeof(foods) / sizeof(string);

    string temp;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter food names or 'q' to quit \n";
        std::getline(cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }
    cout << "You like following foods\n";
    for (int i = 1; !foods[i].empty(); i++) // if we dont use this, it will continue to print blank
    {
        cout << foods[i] << '\n';
    }

    // TWO DIMENSIONAL ARRAYS

    string cars[3][3] = {{"Mustang", "Escape", "Raptor"},
                         {"Corvette", "Camaro", "Silverado"},
                         {"Charger", "Challenger", "Ram"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int cols = sizeof(cars) / sizeof(cars[0][0]);

    for (int i = 1; i < rows; i++)
    {
        for (int j = 1; j < cols; j++)
        {
            cout << cars[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}
