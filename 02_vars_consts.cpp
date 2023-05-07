#include <iostream>

int main(int argc, char const *argv[])
{
    using std::cout, std::cin;
    using string = std::string;
    // vars
    int x; // integer declared
    x = 5;
    int y = 6; // direct declared
    int sum = x + y;

    double price = 10.99; // float declared
    double gpa = 4.0;

    char grade = 'A'; // character declared

    bool gender = true; // boolean declared

    string name = "Valerij"; // string declared

    // consts
    const double PI = 3.1415;
    const double E = 2.87;

    // examples & playground
    cout << x << '\n';
    cout << price << '\n';
    cout << sum << '\n';

    cout << "Hello, what is your name?\n";
    std::getline(cin, name);
    if (!name.empty())
    {
        cout << "Your name length is " << name.length() << '\n';
    }
    string email = name.append("@gmail.com");
    int first_char = name.at(0);
    string patronym_added = name.insert(name.find(' '), " Arturovicz");
    string only_family_name = name.erase(0, 7);
    cout << patronym_added;
    name.clear(); // clear the string

    return 0;
}

// const basically makes vars readable only, it is better
// and makes code more secure
void printInfo(const std::string name, const int age)
{
}