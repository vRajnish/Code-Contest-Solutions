#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int main() {
    int n, e, a[5] = {0};
    cin>>n;
    while(n--) {
        cin>>e;
        a[e]++;
    }
    int val = a[4] + a[3] + (a[2]*2 + max(a[1] - a[3], 0) + 3)/4;
    cout<<val;
}
