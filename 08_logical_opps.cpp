#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    // && is AND
    // || is OR
    // ! is NOT

    using string = std::string;
    using std::cout, std::cin;

    double temp;
    char unit;
    cout << "***TEMP CONV*** \n";
    cout << "F is Fahrenheit \n";
    cout << "C is Celsius \n";
    cout << "Enter the unit you want to use for conversion:  \n";
    cin >> unit;
    switch (unit)
    {
    case 'F':
        cout << "Fahrenheit is selected\nEnter the temperature value\n";
        cin >> temp;
        cout << "To Celsius, " << temp << " Fahrenheits is " << 5 / 9 * (temp - 32);
        break;
    case 'C':
        cout << "Celsius is selected\nEnter the temperature value\n";
        cin >> temp;
        cout << "To Fahrenheit, " << temp << " Celsius is " << (9 / 5 * temp + 32);
        break;
    default:
        cout << "Wrong char was entered\n";
        break;
    }

    return 0;
}
