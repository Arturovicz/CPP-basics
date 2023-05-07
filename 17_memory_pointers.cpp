#include <iostream>

using std::string, std::cout, std::cin;

int main(int argc, char const *argv[])
{
    // Address to memory is found with '&' operator
    string name = "Valerij";
    int age = 23;
    bool is_quantDev = false;
    bool is_student = true;
    cout << name << "'s memory address is: " << &name << '\n';
    cout << is_quantDev << "'s memory address is: " << &is_quantDev << '\n';

    // pass by value/reference
    string x = "Valerij";
    string y = "Valery";
    swap(x, y);
    cout << "X is " << x << " and Y is " << y << '\n';

    // ****POINTERS****

    // & = address-of operator
    // * dereference operator
    // generally, pointers are named with 'p' before the word, ex
    name = "Valer";
    string *pName = &name;
    // THIS MEANS THAT
    //&name = pName and *pName = name
    cout << "The pointer to " << name << " is " << pName << '\n';

    string pizzas[] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};
    string *pPizzas = pizzas;
    cout << "Displaying *pPizzas: " << *pPizzas << '\n';
    cout << "Displaying pPizzas: " << pPizzas << '\n';
    cout << "Displaying pizzas: " << pizzas << '\n';
    cout << "Displaying &pizzas: " << &pizzas << '\n';
    cout << "Displaying pPizzas[1]: " << pPizzas[1] << '\n';
    cout << "Displaying pizzas[1]: " << pizzas[1] << '\n';

    // NULL VALUE NULL POINTER

    int *pointer = nullptr;
    int examp = 123;
    // pointer = &examp;

    if (pointer == nullptr)
    {
        // NOT RECOMMEND TO WRITE *pointer
        cout << "Null pinter, address was not assigned: " << pointer << '\n';
    }
    else
    {
        cout << "Address of " << examp << " successfully assigned under the memory value of " << pointer << '\n';
    }

    return 0;
}

// if we pass only x and y, it will create deep copies of actual
// values and values, which means that we wouldn't be able to
// turn the values
// we are basically pass by REF and not by VALUE
void swap(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
}