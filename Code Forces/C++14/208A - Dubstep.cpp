#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ULL;
typedef long long LL;

int main() {

	freopen("in.o", "r", stdin);
	freopen("out.o", "w", stdout);

	string s;
	cin>>s;

	regex r = "WUB";

	cout<<regex_replace(s, r, " ");

}