#include <bits/stdc++.h>
using namespace std;

int a[10];

string tolow(string s) {
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	return s;
}
string toup(string s) {
	for (int i = 0; i < s.length(); i++)
		s[i] = toupper(s[i]);
	return s;
}

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	string s;
	cin >> s;
	int u = 0, l = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i]))
			u++;
		else
			l++;
	}
	if (u <= l) {
		cout << tolow(s);
	} else {
		cout << toup(s);
	}

}