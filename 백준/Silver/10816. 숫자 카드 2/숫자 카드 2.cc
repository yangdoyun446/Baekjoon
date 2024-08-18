#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, M, card;
	vector<int> arr;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> card;
		arr.push_back(card);
	}
	sort(arr.begin(), arr.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> card;
		cout << upper_bound(arr.begin(), arr.end(), card) - lower_bound(arr.begin(), arr.end(), card) << " ";
	}
}