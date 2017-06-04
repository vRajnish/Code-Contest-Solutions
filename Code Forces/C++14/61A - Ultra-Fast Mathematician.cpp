#include <bits/stdc++.h>
using namespace std;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	string s, r;

	cin >> s >> r;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != r[i])
			cout << "1";
		else
			cout << "0";
	}

}