#include<iostream>
using namespace std;

int gcd(int x,int y)
{
	int temp;
	if(x<y)
	{
    temp=x;
	x=y;
	y=temp;		
	}
	if((x%y)==0)
	{
		return y;
	}
	else
	{
		return (gcd(y,x%y));
	}
}
long long int lcm(int x,int y)
{
	return x*y/gcd(x,y);
}

int main()
{
	int n,m,i;
	long long int lcmm=0,count=0,c=0;
	cin>>n>>m;
	int a[n],b[m];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}	
	lcmm=a[0];
	for(int i=1;i<n;i++)
	{
		lcmm=lcm(lcmm,a[i]);
	}
	for( i=lcmm;i<=b[0];i+=lcmm)
	{
		for(int j=0;j<m;j++)
		 {
		 	if(b[j]%i ==0)
		 	count++;
		 }
		 if(count==m)
		 c++;
		 count=0;
	}
	cout<<c;  
}
