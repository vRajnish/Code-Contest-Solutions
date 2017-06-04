#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n,i,count=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	for(i=0;i<n;i++)
	{
		if(a[i+1]==a[i])
		{
			count++;
            i++;
		}
		
	}
	cout<<count;	
}
