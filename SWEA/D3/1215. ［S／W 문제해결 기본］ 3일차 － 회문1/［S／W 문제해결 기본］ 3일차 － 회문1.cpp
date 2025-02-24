#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& s) {
	return s == string(s.rbegin(), s.rend());
}

int main() {
	int a, cnt = 0;
	char board[8][8];
	for (int w = 0; w < 10; w++) {
		cin >> a;
		cnt = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> board[i][j];
			}
		}

		for (int i = 0; i < 8; i++) {
			for (int j = 0; j <= 8 - a; j++) {
				string s;
				for (int k = 0; k < a; k++) {
					s += board[i][j + k];
				}
				if (isPalindrome(s)) cnt++;
			}
		}

		for (int i = 0; i <= 8 - a; i++) {
			for (int j = 0; j < 8; j++) {
				string s;
				for (int k = 0; k < a; k++) {
					s += board[i + k][j];
				}
				if (isPalindrome(s)) cnt++;
			}
		}

		cout << "#" << w + 1 << " " << cnt << "\n";
	}
}
