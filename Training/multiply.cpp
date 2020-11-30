#include <iostream>

using namespace std;

int main() 
{
    int m, n, i;
    cin >> n >> m;
    cout << "The multilication table of " << n << " is" << endl;
    for(i = 1; i <= m; i++){
        cout << i << "*" << n << "=" << (i * n) << endl;
    }
    return 0;
}
