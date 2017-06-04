#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,y=5,i,sum=0,x;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		x=floor(y/2);
		sum=sum+x;
		y=x*3;
	}
	cout<<sum;
}
