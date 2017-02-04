#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    long s = 0;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
       cin >> arr[i];
       s += arr[i];
    }
    cout<<s;
    return 0;
}
