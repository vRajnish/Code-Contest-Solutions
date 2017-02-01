#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	for(int i=0; i<n; i++) {
		string t = s[i];
		int len = t.length();
		if(len>10) {
			cout<<t[0]<<len-2<<t[len-1]<<"\n";
		} else {
			cout<<s[i]<<"\n";
		}
	}
}
