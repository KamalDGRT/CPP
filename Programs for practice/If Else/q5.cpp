//5. Write a program which takes a character as input and checks whether it is a vowel or consonant.

#include <iostream>

using namespace std;

int main()
{
    char c, d;

    cout << "Enter a character : ";
    cin >> c;

    d = c;
    if(c >= 'A' && c <= 'Z')
      c += 32;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
      cout << endl << d <<" is  a vowel.";
    
    else
      cout << endl << d <<" is a consonant.";
    
    return 0;
}