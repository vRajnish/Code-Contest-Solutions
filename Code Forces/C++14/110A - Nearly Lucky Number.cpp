#include <bits/stdc++.h>
using namespace std;

int a[10];

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	string s;
	cin >> s;

	int u = 0, l = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != '4' && s[i] != '7')
			u++;
		else
			l++;
	}

	if ((l == 4 || l == 7) && l != 0)
		cout << "YES";
	else
		cout << "NO";

}