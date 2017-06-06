#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string s;
	cin>>s;
	int len = s.length(), a[len/2+1];
	for(int i=0; i<len/2+1; i++)
		a[i] = atoi(&s[i*2]);
	sort(a, a+len/2+1);
	cout<<a[0];
	for(int i=1; i<len/2+1; i++)
		cout<<"+"<<a[i];
}
