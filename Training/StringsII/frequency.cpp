#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    int i = 0;
    int frequency[26] = {0};
    getline(cin, str);

    while (str[i] != '\0') {
        frequency[str[i]-'a']++;
        i++;
    }

    
    for(i = 0; i < 26; i++) {
        if(frequency[i])
            cout << char(i + 'a') << " " << frequency[i] << endl;
    }
    return 0;
}
