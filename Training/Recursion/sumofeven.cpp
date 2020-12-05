#include<iostream>

using namespace std;

int even(int a[],int n) {
    if(n < 0)
        return 0;
    if(a[n] % 2 == 0)
        return (even(a, n - 1) + a[n]);
    else
        return even(a,n-1);
}

int main() {
    int n, a[50], i;

    cout << "Enter the number of elements in the array\n";
    cin >> n;

    cout << "Enter the elements in the array\n";
    for(i = 0; i < n; i++)
        cin >> a[i];
    cout << "The sum of the even elements in the array is " << even(a, n);

    return 0;
}
