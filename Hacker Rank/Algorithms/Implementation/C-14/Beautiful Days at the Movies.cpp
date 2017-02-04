#include<iostream>
using namespace std;

int reverse(int y)
{
	int no=0,s;
	while(y)
	{
		s=y%10;
		no=no*10+s;
		y=y/10;
	}
	return no;
}
int main()
{
	int i,j,k,p,x,count=0;
	cin>>i>>j>>k;
	
	for(p=i;p<=j;p++)
	{
		
		x=reverse(p);
		if((p-x)%k==0)
		{
			count++;
		}
	}
	cout<<count;
}
