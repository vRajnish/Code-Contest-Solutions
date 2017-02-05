#include<iostream>
using namespace std;

int main()
{
	int n,k,i,E=100;
	cin>>n>>k;
	int a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;)
	{
		if(a[i]==0)
		{
			E=E-1;
		}
		else if(a[i]==1)
		{
			E=E-2-1;
		}	
	    i = (i+k)%n;		
		if(i==0)
		{
			cout<<E;
			break;
		}
	}	
}
	
