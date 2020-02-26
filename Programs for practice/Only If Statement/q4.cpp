//4. Write a program to display a number only if the user enters a negative number. If the user enters a 
//   positive number, that number should not be displayed.

#include <iostream>

using namespace std;

int main()
{
    int n;    

    cout << "Enter a number : ";
    cin >> n;

    if ( n < 0)
    cout << "\nThe etered number is  : " << n;
    return 0;
}