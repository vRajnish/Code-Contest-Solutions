#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n;
	cin >> n;
	int a[n], min = 0, max = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] <= a[min])
			min = i;
		if (a[i] > a[max])
			max = i;
	}

	if (min < max)
		cout << max + (n - min - 2);
	else
		cout << max + (n - 1 - min);

}