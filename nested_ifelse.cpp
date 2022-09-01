#include <iostream>
using namespace std;
int main()
{
    //get input from user and print something according their age input
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if (age >= 0 && age <= 100)
    {
        if (age >= 0 && age <= 10)
        {
            cout << "Age is 0 to 10";
        }
        else if (age >= 10 && age <= 18)
        {
            cout << "Age is 10 to 18";
        }
        else if (age >= 18 && age <= 29)
        {
            cout << "Age is 18 to 29";
        }
        else if (age >= 29 && age <= 49)
        {
            cout << "Age is 29 to 49";
        }

        else if (age >= 49 && age <= 69)
        {
            cout << "Age is 49 to 69";
        }
         else if (age >= 69 && age <=100)
        {
            cout << "Age is 69 to 100";
        }
    }

    else
    { 
    
            cout << "You are a Dead person";
    
    }

    return 0;
}
