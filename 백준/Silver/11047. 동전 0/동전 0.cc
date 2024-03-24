#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

int main() {
	int n, k, tmp, ans = 0;
	int sum = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}

	for (int i = n - 1; i >= 1; i--) {
		int cnt = (k - sum) / arr[i];

		ans += cnt;
		sum += cnt * arr[i];
	}

	ans += k - sum;

	cout << ans;

	return 0;
}