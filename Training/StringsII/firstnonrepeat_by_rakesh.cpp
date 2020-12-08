#include <iostream>
#include <string>
using namespace std;
void frequency(string s) {
    int n = s.length();
    int count[128] = {0};

    for(int i = 0; i < n; i++)
        count[s[i]]++;

    for(int i = 0; i < n; i++) {
        if(count[s[i]] == 1) {
            cout<<s[i]<<endl;
            break;
        }
        else {
            cout<<"All the characters are repetitive";
            break;
        }
    }
}    

int main() {
  string str;
  cin >> str;
  frequency(str);
}
