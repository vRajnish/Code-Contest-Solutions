#include<iostream>
using namespace std;

int digit(int n)
{
	return n%10;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long x,y,temp,count1=0;
		cin>>x;
		long q=x;
		
		while(q)
		{
			temp = digit(q);
			if(temp!=0)
			if(x%temp==0)
			{
				count1++;
			}
			q=q/10;
		//	cout<<temp<<" ";
		}
		cout<<count1<<"\n";	
	}
}
