#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(26, 0);
	string s;
	cin >> s;

	for (auto c : s)
		v[c - 'a']++;
	for (int i = 0; i < 26; i++)
		cout << v[i] << ' ';
}