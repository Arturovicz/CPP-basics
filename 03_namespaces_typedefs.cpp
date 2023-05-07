#include <iostream>
#include <vector>

// we named this whole ass expression as 'pairlist_t'
typedef std::vector<std::pair<std::string, int>> pairlist_t;
// or
typedef std::string text_t;
// or, more conveniently
using text_t = std::string;
using number_t = int;

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main(int argc, char const *argv[])
{
    using std::cout;
    using std::string;

    int x = 0;
    cout << "As a local variable, x is " << x << '\n';
    cout << "As a variable coming from  1st namespace, x is " << first::x << '\n';
    cout << "As a variable coming from 2nd namespace, x is " << second::x << '\n';

    // may also be done by
    /*

    using namespace first;
    cout << x; this will print 2

    */

    pairlist_t pairlist;
    text_t first_name = "Valerij";
    cout << first_name << '\n';

    return 0;
}
