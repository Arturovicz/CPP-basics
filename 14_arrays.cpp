#include <iostream>

double get_sum(double prices[], int array_size);
int get_index(std::string prices[], int array_size, std::string the_value);

int main(int argc, char const *argv[])
{
    using std::cout, std::cin;
    using string = std::string;

    string cars[] = {"Corvette",
                     "Camaro",
                     "Camry"};

    cout << cars << '\n';                           // this will print the memory address
    cout << sizeof(cars[0]) << '\n';                // shows the size in bytes
    cout << sizeof(cars) / sizeof(cars[0]) << '\n'; // shows number of elements
    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        cout << cars[i] << '\n';
    }

    double prices[] = {0.0, 999.99, 99.99, 9.99};
    int size = sizeof(prices) / sizeof(prices[0]);
    int index;
    double myNum;
    string car;
    double total = get_sum(prices, size);
    cout << "Enter a number\n";
    cin >> myNum;
    cout << "Enter a car name \n";
    std::getline(cin, car);
    index = get_index(cars, size, car);
    cout << "The index of " << myNum << " will be " << index << '\n';

    const int SIZE = 100;
    string foods[size];
    fill(foods, foods + SIZE / 3, "Valerij");
    fill(foods + SIZE / 3, foods + 2 * SIZE / 3, "Ashotik");
    fill(foods + 2 * SIZE / 3, foods + SIZE, "Miguaz");

    return 0;
}

double get_sum(double prices[], int array_size)
{
    double total = 0;
    for (int i = 0; i < array_size; i++)
    {
        total += prices[i];
    }

    return total;
}

int get_index(std::string prices[], int array_size, std::string theNumber)
{

    for (int i = 0; i < array_size; i++)
    {
        if (theNumber == prices[i])
        {
            return i;
        }
    }

    return -1;
}

void sort_array(int array[], int array_size)
{

    int temp;

    for (int i = 0; i < array_size - 1; i++)
    {
        for (int j = 0; j < array_size - i - 1; j++)
        {
            if (array[j] == array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}