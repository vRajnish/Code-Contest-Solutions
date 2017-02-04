#include<iostream>
using namespace std;

int main()
{
	int s,t,a,b,m,n,count=0,count1=0,x,y;
	cin>>s>>t>>a>>b>>m>>n;
	
	while(m--)
	{
		cin>>x;
		if((a+x)>=s&&(a+x)<=t)
		{
			count++;
		}
	}
	while(n--)
	{
		cin>>y;
		if((b+y)<=t&&(b+y)>=s)
		{
			count1++;
		}
	}
	cout<<count<<"\n"<<count1;
	
}
