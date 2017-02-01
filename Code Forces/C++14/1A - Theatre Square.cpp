#include<iostream>
using namespace std;
int main() {
	long long m,n,a,r,c;
	cin>>m>>n>>a;
	r = m/a;
	c = n/a;
	if(m%a != 0 && a<m)
		r++;
	else if(a>m)
		r = 1;
	if(n%a != 0 && a<n)
		c++;
	else if(a>n)
		c = 1;
	cout<<r*c;
	return 0;
}
