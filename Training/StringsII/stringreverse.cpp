#include <iostream>
#include <string>
using namespace std;

int main() {

    char temp;
    int size = 0, i = 0;
    string str;

    getline(cin, str);

    while (str[size] != '\0') {
        size++;
    }

    size = size - 1;
    while (i < size) {
        temp = str[i];
        str[i] = str[size];
        str[size] = temp;
        size--;
        i++;
    }
    cout << "The reversed String is " << str;

    return 0;
}
