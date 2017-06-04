#include <bits/stdc++.h>
using namespace std;

int a[10];

int chk() {
	for (int i = 0; i < 10; i++) {
		if (a[i] == 0 || a[i] == 1) {
			continue;
		} else {
			return 0;
		}
	}
	return 1;
}

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	int n;
	cin >> n;
	for (int i = n + 1; ; i++) {
		int t = i;
		memset(a, 0, sizeof(a));
		while (t) {
			a[t % 10]++;
			t = t / 10;
		}
		if (chk()) {
			cout << i;
			break;
		}
	}

}