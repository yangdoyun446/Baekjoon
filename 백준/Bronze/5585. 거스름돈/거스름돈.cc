#include <bits/stdc++.h>
using namespace std;
int main(void) {
	int n, m, cnt = 0, mon[6] = {500, 100, 50, 10, 5, 1};
	cin >> n;
	m = 1000 - n;
	for (auto c : mon) {
		cnt += m / c;
		m %= c;
	}
	cout << cnt;
}