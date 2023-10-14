#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string name1 = "Ranga";
    string name2 = "Ranga";

    const float pi = 3.14;
    cout << pi << endl;
    cout << sizeof(pi) << endl;

    if (name1 == name2)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}