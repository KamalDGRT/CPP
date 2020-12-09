#include <iostream>
#include <cstring>
using namespace std; 

int main() 
{ 
    char str[80] = "Hellow, World!!", str2[80], str3[80], *s;
    int length;

    strcpy(str2, str);
    strcpy(str3, "Hi!! ");
    strcat(str3, str2);

    length = strlen(str3);

    cout << length << endl;
    if(strcmp(str3, str2) > 0)	
    	s = strchr(str3, 'e');
    else
    	s = strstr(str3, str2);

    cout << s;

    return 0; 
} 
