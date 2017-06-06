#include<iostream>
using namespace std;
int main() {
	int n,d,u,m=0,r=0;
	cin>>n;
	while(n--) {
		cin>>d>>u;
		r = r + (u-d);
		m = max(r,m);
	}
	cout<<m;
}
