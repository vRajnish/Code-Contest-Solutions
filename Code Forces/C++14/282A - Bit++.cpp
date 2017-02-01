#include<iostream>
using namespace std;
int main() {
	int n,x=0;
	char s[4];
	cin>>n;
	while(n) {
		cin>>s;
		if(s[0] == '+')
			x++;
		else if(s[0] == '-')
			x--;
		else if(s[1] == '+')
			x++;
		else if(s[1] == '-')
			x--;
		n--;
	}
	cout<<x;
}
