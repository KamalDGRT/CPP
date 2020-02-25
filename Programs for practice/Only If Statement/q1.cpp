//1. Get a number from user. If the number is less than or equal to 10, print the message "Good".

#include <iostream>

using namespace std;

int main()
{
    int n;    

    cout << "Enter a number : ";
    cin >> n;

    if ( n <= 10)
      cout << "Good";

    return 0;
}