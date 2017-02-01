#include<iostream>
#include<string>
using namespace std;
int main() {
	int j=0;
	bool chk=false;
	string s;
	cin>>s;
	int n = s.size();
	for(int i=0; i<n; i++) {
		if(s[i] == s[i+1])
			j++;
		else
			j=0;
		if(j == 6)
			chk = true;
	}
	if(chk)
		cout<<"YES";
	else
		cout<<"NO";
}
