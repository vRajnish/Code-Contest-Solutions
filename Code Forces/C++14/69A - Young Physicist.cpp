#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n,x,y,z,sx = 0, sy = 0, sz = 0;

	cin>>n;

	for(int i=0; i<n; i++) {
		cin>>x>>y>>z;
		sx += x;
		sy += y;
		sz += z;
	}

	if(sx == 0 && sy == 0 && sz == 0) {
		cout<<"YES";
	} else {
		cout<<"NO";
	}

}