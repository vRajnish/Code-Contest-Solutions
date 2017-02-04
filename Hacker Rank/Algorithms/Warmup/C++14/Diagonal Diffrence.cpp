#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, d1=0,d2=0, s;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          cin >> a[i][j];
       }
    }
    
    for(int i=0; i<n; i++) {
        d1 += a[i][i];
        d2 += a[n-i-1][i];
    }
    
    if(d1 - d2 < 0) {
        s = d2 - d1;
    } else {
        s = d1 - d2;
    }
    
    cout<<s;
    
    return 0;
}
