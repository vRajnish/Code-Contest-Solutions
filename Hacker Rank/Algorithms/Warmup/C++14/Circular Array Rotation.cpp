#include<iostream>
using namespace std;
int main() {
	int n,k,q,in;
	cin>>n>>k>>q;
	int a[n];
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	while(q--) {
		cin>>in;
		cout<<a[((in-k)%n+n)%n]<<"\n";
	}
}
