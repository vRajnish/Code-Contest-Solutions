#include<iostream>
using namespace std;

int main()
{
	int n,k,i,b,sum=0,b1;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>b;
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	b1=(sum-a[k])/2;
	
	if(b==b1)
	{
		cout<<"Bon Appetit";
	}else
	{
		cout<<b-b1;
	}
}
