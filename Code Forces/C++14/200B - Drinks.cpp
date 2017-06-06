#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n, e;
	cin >> n;
	float sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> e;
		sum += (float)e / 100;
	}

	printf("%.12f", ((float)sum / n) * 100);
}