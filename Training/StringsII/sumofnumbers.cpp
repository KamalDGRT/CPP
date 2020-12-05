#include <iostream>
#include <string>

using namespace std;

int main() {

    char temp;
    int size = 0, sum = 0;
    string str;

    getline(cin, str);

    while (str[size] != '\0') {
        if(str[size] >= '0' && str[size] <= '9')
            sum += (str[size] - '0');
        size++;
    }
    cout << sum;
    return 0;
}
