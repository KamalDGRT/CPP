//3. Given the co-ordinates of the left top and right bottom corners of a rectangle, determine whether it is a square or not.

#include<iostream>

using namespace std;

int main()
{
    int x1,x2,y1,y2,x,y;

    cout << "Enter top left corner co-ordinates (x1,y1) :  ";
    cin >> x1 >> y1;

    cout << "Enter bottom right corner co-ordinates (x2,y2) : ";
    cin >> x2 >> y2;

    x = x2 - x1;
    y = y2 - y1;

    if (x < 0)
       x = -x;
    if (y < 0)
       y = -y;

    if (x == y)
       cout << "\nThe given co-ordinates form a square.";
    
    else
       cout << "\nThe given co-ordinates do not form a square.";
       
    return 0;
}