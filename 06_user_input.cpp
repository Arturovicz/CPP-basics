#include <iostream>

int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    using string = std::string;
    string name;
    int age;

    cout << "what is your name?\n";
    std::getline(cin >> std::ws, name); // this is done bc originally cin takes the input before the 1st space operator
    cout << "Hello " << name << "!, what is ur age?\n";
    cin >> age; // std::ws is whitespace
    cout << "Your age is " << age << "\n";

    return 0;
}
