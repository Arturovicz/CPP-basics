#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    using string = std::string;
    using std::cin;
    using std::cout;

    string Valer = "Valerij";
    int money = 7000;
    money += 1000;
    money -= 100;
    money *= 2;
    money /= 1;

    int remainder = money % 3;
    int sum = (money + money) / 2;

    double a = 3;
    double b = 4;
    double c;

    c = std::max(a, b);   // c = std::min(a, b);
    double d = pow(2, 3); // 2^3
    double e = sqrt(9);
    double f = abs(-8);
    double g = round(8.49); // rounds 8 if value < 8.5, if not gives 9
    double h = ceil(8.32);  // always to upper int
    double i = floor(8.32); // always to upper int

    cout << "rounded value of 8.53: " << g << '\n';
    cout << "ceiled value of 8.32: " << h << '\n';

    double x, y, z;

    cout << "Enter 1st side: \n";
    cin >> x;
    cout << "Enter 2nd side: \n";
    cin >> y;
    z = sqrt(pow(x, 2) + pow(y, 2));
    cout << "Hypothenus value is: " << z << '\n';

    return 0;
}
