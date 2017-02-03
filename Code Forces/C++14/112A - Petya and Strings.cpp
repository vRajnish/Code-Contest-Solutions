#include<iostream>

using namespace std;

string tlow(string s) {
	for(int i=0; s[i]!='\0'; i++) {
		s[i] = (char) tolower((int) s[i]);
	}
	return s;
}

int main() {
	string s1,s2;
	cin>>s1>>s2;
	s1 = tlow(s1);
	s2 = tlow(s2);
	if(s1 == s2) {
		cout<<"0";
	} else if(s1 < s2) {
		cout<<"-1";
	} else {
		cout<<"1";
	}
}
