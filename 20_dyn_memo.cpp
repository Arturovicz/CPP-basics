#include <iostream>

using std::string, std::cout, std::cin;

int main(int argc, char const *argv[])
{
    int number = 21;
    int *pNumber = &number;
    cout << "Display number: " << number << '\n';
    cout << "Display pNumber: " << pNumber << '\n';
    cout << "Display *pNumber: " << *pNumber << '\n';
    cout << "Display &number: " << &number << '\n';

    int *pNum = NULL; // good habit to put ref=NULL
    pNum = new int;   // new is used to allocate in dynamic memory rather than static memory
    *pNum = 21;
    cout << "Address value: " << pNum << '\n';
    cout << "Value: " << *pNum << '\n';

    delete pNum; // when finished with pNum, delete it

    char *pGrades = NULL;
    int size;
    cout << "Enter the size of the grade array: ";
    cin >> size;
    pGrades = new char[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter grade N" << i + 1 << ' ';
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << ' ';
    }

    delete pGrades;

    return 0;
}
