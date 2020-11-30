#include<iostream>
using namespace std;

int main()
{
    int n, temp, i, k = 1;
    cin >> n;
    int a[1000], t[100];
    for(i = 0; i < n; i++)
        cin >> a[i];
    t[0] = a[0];

    for(i = 1; i < n; i++){
        int f = 0;
        for(int j = 0; i < k; i++)
            if(t[j] == a[i]) {
                f = 1;
                break;
            }
        if(f){
            t[k] = a[i];
            k++;
        }
    }

    for(i = 0; i < k; i++)
        cout << t[i] << endl;

    return 0;    
}
