#include<iostream>
using namespace std;
int isSpecial(int n) {
    int sum = 0, product = 1, temp, r, flag = 0;
    temp = n;
    while(n) {
        r = n % 10;
        sum += r;
        product *= r;
        n /= 10;
    }
    if((sum + product) == temp)
    flag = 1;
    return flag;
}
int main() {
	int m, n, i;
    cin >> m >> n;
    for (i = m; i <= n; i++)
        if (isSpecial(i))
            cout << i << endl;
	return 0;
}
