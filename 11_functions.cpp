#include <iostream>
#include <cmath>

using string = std::string;
using std::cout, std::cin;

// FOR READABILITY, DEFINE HERE, WRITE BELOW main()
void say_hello_to(std::string name);
double squared(double var_to_square);
string display_name(string name, string surname);

int main(int argc, char const *argv[])
{
    say_hello_to("Miguaz");
    double squared_var = squared(3.3);
    cout << squared_var << '\n';
    cout << display_name("Valerij", "Arturovicz");
    return 0;
}

void say_hello_to(std::string name)
{
    cout << "Hello " << name << '\n';
}

double squared(double var_to_square)
{
    return pow(var_to_square, 2);
}

string display_name(string name, string surname)
{
    string total_name = "Dr. ";
    total_name = total_name.append(name);
    total_name = total_name.append(" ");
    return total_name.append(surname);
}