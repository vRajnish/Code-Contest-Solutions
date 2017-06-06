#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string t;
    cin >> t;
    char a[2] = {t[0], t[1]};
    int hh = atoi(a);
    if(hh == 12 && t[8] == 'A')
        cout<<"00";
    else if(hh < 10 && t[8] == 'A')
        cout<<"0"<<hh;
    else if(t[8] == 'P' && hh < 12) {
        hh+=12;
        cout<<hh;
    } else {
    	cout<<hh;
    }
        for(int i=2; i<t.length()-2; i++) {
        cout<<t[i];
    }
    return 0;
}
