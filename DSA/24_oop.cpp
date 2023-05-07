#include <iostream>

using std::string, std::cout, std::cin;

class Human
{
public:
    string name;
    bool isEnrolled = true;
    int age;

    Human(string name, bool isEnrolled, int age) // this is a constructor
    {
        this->age = age;
        this->name = name;
        this->isEnrolled = isEnrolled;
    }

private:
    string ssn;
};
class Pizza
{
public:
    string topping1;
    string topping2;

    // Overloading the contructor
    Pizza() {}

    Pizza(string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(string topping1, string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};
class Stove
{
private:
    int temp = 0;

public:
    int getTemp() { return temp; }
    void setTemp(int temp)
    {
        temp > 10 ? this->temp = temp : this->temp = 0;
    }
};
class Animal
{
public:
    bool isAlive = true;
    void eat()
    {
        cout << "This Animal is eating\n";
    }
};
class Dog : public Animal
{
public:
    void Bark()
    {
        cout << "Bark bark\n";
    }
};
class Cat : public Animal
{
public:
    void Meow()
    {
        cout << "Meow meow\n";
    }
};

int main(int argc, char const *argv[])
{
    Human human1("Valer", true, 23);
    Human human2("Valer", false, 25);

    Pizza pepperoni("Pepperoni");
    Pizza fourSeason("Gruyère", "Emmental");
    Pizza simplePizza();

    Stove stove;
    cout << "Stove temperature: " << stove.getTemp() << '\n';
    stove.setTemp(33);
    cout << "Stove temperature: " << stove.getTemp() << '\n';

    return 0;
}
