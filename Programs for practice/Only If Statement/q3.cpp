//3. Write a program to find the absolute value of a given number.

#include <iostream>

using namespace std;

int main()
{
    int n;    

    cout << "Enter a number : ";
    cin >> n;

    if ( n < 0)
      n = -n;

    cout << "\nAbsolute Value : " << n;
    return 0;
}