#include <bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v(10, 0);
	int a;
	string s;
	cin >> a;
	s = to_string(a);

	for (auto i : s) {
		if (i == '6' || i == '9') {
			v[6] += 1;
		} else {
			v[i - '0'] += 1;
		}
	}
	if (v[6] % 2 == 1) {
		v[6] /= 2;
		v[6]++;
	} else {
		v[6] /= 2;
	}

	cout << *max_element(v.begin(), v.end());
}