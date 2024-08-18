#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000005];
vector<int> v;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < n; i++) {
		cout << lower_bound(v.begin(), v.end(), a[i]) - v.begin() << ' ';
	}
}