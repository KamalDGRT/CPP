#include<iostream>

using namespace std;

int convert(int n, int base) {
    if (n == 0)
     	return 0;
    else
     	return convert(n / base, base) * 10 + (n % base);
}

int main() {
    int n, base;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "Enter the base to which you want to convert" << endl;
    cin >> base;
    cout << "The number in base " << base <<" is " << convert(n, base);
}
