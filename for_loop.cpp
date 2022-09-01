#include <iostream>
using namespace std;
int main()
{
    // this code is made by me
    // calculate sum(+) of n numbers enter by user by using for loop
    // eg: 1+2+3+4+5+6+7+8+9=45 here n=9
    int n;
    cout << "Enter Number to calculate: ";
    cin >> n;
    int x = 0; // for using for loop
    for (int i = 0; i <= n; i++)
    {
        x = x + i;
    }
    cout << x;

    return 0;
}