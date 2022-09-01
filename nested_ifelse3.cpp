#include <iostream>
using namespace std;
int main()
{
    // find the given number is odd or Even

    int n;

    cout << "Enter a Number: ";
    cin >> n;
    
    if (n%2==0){
        cout<<"Even Number";
    }
    else{
        cout<<"odd Number";
    }


    return 0;
}