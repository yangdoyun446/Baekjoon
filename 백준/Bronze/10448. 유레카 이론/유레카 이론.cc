#include <bits/stdc++.h>
using namespace std;
int triangleNum[1001];
bool trianglenumbersum(int a) {
	for (int i = 1; i <= 45; i++) {
		for (int j = 1; j <= 45; j++) {
			for (int k = 1; k <= 45; k++) {
				if (triangleNum[i] + triangleNum[j] + triangleNum[k] == a) {
					return true;
				}
			}
		}
	}
	return false;
}
int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(false);

	for (int i = 1; i <= 45; i++) {
		triangleNum[i] = i * (i + 1) / 2;
	}

	int T, k;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k;
		cout << trianglenumbersum(k) << "\n";
	}
}

// 중요 조건식
// K는 1000을 넘지 **않는다**
// 삼각수의 세 합은 n이 45인 경우부터 1000을 넘는다.