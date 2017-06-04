#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1), b(n + 1);
	a[0] = -1;
	int i = 1;
	string s;
	while (a[i - 1] == -1) {
		cin >> s;
		a[i] = s.find_last_of('1');
		b[i] = (m + 1) - s.find_first_of('1');
		if (a[n] == -1) {
			cout << 0;
			return 0;
		}
		i++;
	}

	while (i <= n) {
		cin >> s;
		int x = s.find_last_of('1');
		if (x == -1) x = 0;
		int y = (m + 1) - s.find_first_of('1');
		if (y == m + 2) y = 0;

		a[i] += min((b[i - 1] + m + 1), a[i - 1] + 2 * x);
		b[i] += min((a[i - 1] + m + 1), b[i - 1] + 2 * y);
		i++;
		a[n]++;
	}

	cout << a[n];
}