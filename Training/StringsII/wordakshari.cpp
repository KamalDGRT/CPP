#include<iostream>
#include<string>

using namespace std;

int main() {

string a[50];

int i = 0;
int n, lastPos;

while(1) {
	getline(cin, a[i]);
	i++;
	if(!a[i-1].compare("####"))
		break;	
}
n = i;

cout << a[0] << endl;

for(i = 0; i < n; i++) {
	lastPos = a[i].size() - 1;
	if(a[i][lastPos] == a[i+1][0])
		cout << a[i+1] << endl;
}

return 0;
}
