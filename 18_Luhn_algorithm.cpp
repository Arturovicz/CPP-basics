#include <iostream>
#include <cstdlib>
#include <string>

using std::string, std::cout, std::cin;

int getDigit(const int number)
{
    // for 18, we will get 9
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += (cardNumber[i] - '0') * 2; // Look for ASCII table
    }
}
int sumEvenDigits(const string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2); // Look for ASCII table
    }
}

int main(int argc, char const *argv[])
{
    string cardNumber;
    int result = 0;

    cout << "*********Luhn Algorithm*********\n";
    cout << "***For testing if CC is valid***\n";
    do
    {
        cout << "Enter a 16 digit CC number\n";
        std::getline(std::cin, cardNumber);
    } while (cardNumber.length() != 16);

    result = sumEvenDigits(cardNumber) + sumEvenDigits(cardNumber);
    if (result % 10 != 0)
    {
        cout << cardNumber << " is Not a working credit card\n";
    }
    else
    {
        cout << cardNumber << " is an actual working credit card\n";
    }

    return 0;
}
