#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ULL;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	ULL k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;
	int a[d];
	ULL c = 0;
	for(ULL i=1; i<=d; i++) {
		if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
			c++;
	}
	cout<<c;
}