#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n, s = 0, r = 0, i;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
	}

	sort(a, a + n);

	for (i = 0; 2 * r <= s; i++) {
		r += a[n - i - 1];
	}

	cout << i;

}