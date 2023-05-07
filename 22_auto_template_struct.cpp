#include <iostream>

using std::string, std::cout, std::cin;

// TEMP AUTO
template <typename T, typename S> // this would mean we have object T
auto max(T a, S b)                // auto deduced the return type itself
{
    return a > b ? a : b;
}

// STRUCT
struct Student
{
    string name;
    double gpa;
    bool isEnrolled = true;
};
struct Car
{
    string model;
    int year;
    string color;
};

void printCar(Car car)
{
    cout << car.model << " " << car.year << " " << car.color << '\n';
}
void changeYear(Car &car)
{
    car.year = car.year + 10;
}

int main(int argc, char const *argv[])
{

    cout << max(1, 2.1) << '\n';

    Student student1;
    student1.name = "Bob";
    student1.gpa = 4.1;

    Car bmw;
    bmw.model = "BMW";
    bmw.year = 2000;
    bmw.color = "Black";

    cout << bmw.model << " " << bmw.year << " " << bmw.color << '\n';
    changeYear(bmw);
    cout << bmw.model << " " << bmw.year << " " << bmw.color << '\n';

    return 0;
}
