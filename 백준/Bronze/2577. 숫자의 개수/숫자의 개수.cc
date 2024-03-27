#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(10, 0);
	int a, b, c;
	string s;
	cin >> a >> b >> c;
	s = to_string(a * b * c);

	for (auto i : s) {
		v[i - '0'] += 1;
	}

	for (auto e : v)
		cout << e << '\n';
}