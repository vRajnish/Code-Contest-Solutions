#include<iostream>
#include<vector>
using namespace std;
int main()
{   int n,k,c=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {   if(!a[i])
            continue;
        else if(a[i]>=a[k-1])
            c++;
        else
            break;
    }
    cout<<c;
}
