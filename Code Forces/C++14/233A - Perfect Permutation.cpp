#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n;
	cin >> n;
	if (n % 2 != 0)
		cout << -1;
	else
		for (int i = n; i >= 1; i--)
			cout << i << " ";

}