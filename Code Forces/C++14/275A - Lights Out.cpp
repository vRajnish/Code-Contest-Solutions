#include <bits/stdc++.h>
using namespace std;

int a[10][10];

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);


	for (int i = 2; i < 2 + 3; ++i) {
		for (int j = 2; j < 2 + 3; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 2; i < 2 + 3; ++i) {
		for (int j = 2; j < 2 + 3; j++) {
			cout << !((a[i][j] + a[i][j + 1] + a[i][j - 1] + a[i + 1][j] + a[i - 1][j]) % 2);
		}
		cout << "\n";
	}

}