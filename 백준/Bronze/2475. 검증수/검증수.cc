#include <bits/stdc++.h>
using namespace std;
int main(void) {
	vector<int> a;
	int b;
	for (int i = 0; i < 5; i++) {
		cin >> b;
		a.push_back(b * b);
	}
	cout << accumulate(a.begin(), a.end(), 0) % 10;
	return 0;
}