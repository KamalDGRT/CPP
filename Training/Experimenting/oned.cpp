#include<iostream>
using namespace std;

int present(int a[], int n, int k){
    int f = 0;
    for(int i = 0; i < n; i++)
        if(a[i] == k) {
            f = 1;
            break;
        }
    return f;
}

int main()
{
    int n, temp, i, k = 1;
    cin >> n;
    int a[1000], t[100];
    for(i = 0; i < n; i++)
        cin >> a[i];
    t[0] = a[0];
    for(i = 1; i < n; i++)
        if(!present(t,k,a[i])){
            t[k] = a[i];
            k++;
        }
    cout << "There are " << k << " distinct elements in the array.";

    return 0;    
}