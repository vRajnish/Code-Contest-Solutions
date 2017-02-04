#include<iostream>
using namespace std;
int main()
{
	int t,i,count=0;
	cin>>t;	
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]<=0)
			{
				count++;
			}
		}
		if(count>=k)
		{
			cout<<"NO"<<"\n";
		}
		else
		{
			cout<<"YES"<<"\n";
		}
        count=0;
	}
}
