#include <bits/stdc++.h>
using namespace std;
int main(void) {
	int n, cnt = 0;
	cin >> n;
	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		while (a[i] < a[i - 1]) {
			a[i] *= 2;
			cnt++;
		}
	}
	cout << cnt;
}