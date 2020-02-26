/* 5. Write a program to accept two integers and display the message "Equal" if they are equal. If not,
   message should not be displayed. */

#include <iostream>

using namespace std;

int main()
{
    int n1 , n2;    

    cout << "Enter 2 numbers : ";
    cin >> n1 >> n2;

    if ( n1 == n2)
    cout << "Equal";
    
    return 0;
}