#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,m,s,i;
		cin>>n>>m>>s;
		s=(s+m-1)%n;
		
		if(!s)
		{
			cout<<n<<"\n";
		}
		else
		{
			cout<<s<<"\n";
		}				
	}	
}
