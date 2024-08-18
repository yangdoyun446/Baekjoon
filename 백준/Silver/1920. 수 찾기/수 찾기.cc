#include <bits/stdc++.h>
using namespace std;
int main(void) {
	vector<int> v;
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		v.push_back(m);
	}
	cin >> m;
	sort(v.begin(), v.end());
	int t;
	for (int i = 0; i < m; i++) {
		cin >> t;
		cout << binary_search(v.begin(), v.end(), t) << '\n';
	}
}