#include<iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    int len = str.length();
    int n = len - 1;

    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[n]);
        n = n - 1;
    }

    cout << "The reversed String is " << str << ".";
    return 0;
}
