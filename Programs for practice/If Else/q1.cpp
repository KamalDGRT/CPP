//1. Write a program to check whether a given number is postive or not.

#include<iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    if (n > 0)
      cout << n <<" is positive.";
    else
      cout << n << " is not positive.";

    return 0;
}