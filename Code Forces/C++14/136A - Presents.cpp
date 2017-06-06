#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n, e;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> e;
		a[e] = i;
	}

	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}

}