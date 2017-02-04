#include<iostream>
using namespace std;

int main()
{
	int t,x,i,h=1;
	cin>>t;
	
	while(t--)
	{
		cin>>x;
		if(x==0)
		{
		cout<<h<<"\n";
		}
		else
		{
		for(i=1;i<=x;i++)
		{
			if(i%2!=0)
			{
					h=h*2;
			}
			else
			{
				h+=1;
			}			
		}
		cout<<h<<"\n";
		h=1;
		}	   
	}
}
