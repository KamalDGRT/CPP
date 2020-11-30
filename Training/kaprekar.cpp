#include <iostream>

using namespace std;

int main() 
{
    int kpno, kflag = 1, nsquare;
    cin >> kpno;

    nsquare = kpno * kpno;

    if(kflag)
        cout << "Kaprekar Number";
    else
        cout << "Not a Kaprekar Number";
    

}
