#include <iostream>
using namespace std;
int main()
{
    // Get 3 input from user and and the max number using nested ifelse.

    int a, b, c;

    cout << "Enter a Value of a : ";
    cin >> a;
    cout << "Enter a Value of b : ";
    cin >> b;
    cout << "Enter a Value of c : ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "The Max value b/w a,b,c is ";
            cout << a;
        }
        else
        {
            cout << "The Max value b/w a,b,c is ";
            cout << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The Max value b/w a,b,c is ";
            cout << b;
        }
        else
        {
            cout << "The Max value is c = ";
            cout << c;
        }
    }

    return 0;
}