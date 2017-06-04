#include <bits/stdc++.h>
using namespace std;

int a[10][10];

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	string s;

	getline(cin, s);

	if (islower(s[0]))
		s[0] = toupper(s[0]);

	cout << s;

}