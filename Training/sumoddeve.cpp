#include <iostream>

using namespace std;

int main() 
{
    int n, a[100], i, osum = 0, esum = 0;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2)
            osum += a[i];
        else
            esum += a[i];
    }
    
    cout << "The sum of the even numbers in the array is " << esum << endl;
    cout << "The sum of the odd numbers in the array is " << osum;
    return 0;
}
