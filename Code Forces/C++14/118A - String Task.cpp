#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int main() {
	
	char v[6] = {'a','e','i','o','u','y'};
	
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++) {
		bool chk = true;
		s[i] = (char) tolower((int) s[i]);
		for(int j=0; j<6; j++) {
			if(s[i] == v[j])
				chk=false;
		}
		if(chk)
			cout<<"."<<s[i];
	}	
}
