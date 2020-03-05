//1. Read three numbers from the user and find the biggest among them using nested if statements.

#include<iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b >>c;

    if(a>b)
    {
        if(a>c)
           cout << a << " is the biggest.";
    }
    else
    {
        if(b>c)
           cout << b <<" is biggest.";
        else
        {
            cout << c << " is biggest.";
        }
        
    }
    
    return 0;
}       