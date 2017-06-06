#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int p[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < 15; i++) {
		if (n == p[i] && m == p[i + 1]) {
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
}