#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n, k;

	cin>>n>>k;

	string s;
	cin>>s;
	for(int i=0; i<k; i++) {
		for(int j=0; j<n-1; j++) {
			if(s[j] == 'B' && s[j+1] == 'G') {
				s[j] = 'G';
				s[j+1] = 'B';
				j++;
			}
		}
	}

	cout<<s;

}