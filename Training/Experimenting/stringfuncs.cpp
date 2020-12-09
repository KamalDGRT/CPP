#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);
    swap(s1,s2);                                                               
    cout << s1 << endl << s2 << endl;
    cout << s1.length() << endl << s2.length() << endl;
    cout << s1.find("a") << endl;
    cout << s2.find("a") << endl;
    s1.erase();
    s2.erase(1,4);
    cout << s1 << s2 <<endl;
    return 0;
}
