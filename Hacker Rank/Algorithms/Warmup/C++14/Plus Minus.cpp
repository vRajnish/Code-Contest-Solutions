#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, c;
    float ne=0, nn=0, ze=0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
       cin >> a[i];
        if(a[i] < 0) {
            ne++;
        } else if (a[i] > 0) {
           nn++;
        } else {
            ze++;
        }
    }
    
    printf("%f\n%f\n%f", nn/n, ne/n, ze/n);
    
    return 0;
}
