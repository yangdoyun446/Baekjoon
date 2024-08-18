#include <bits/stdc++.h>
using namespace std;
int calculateScore(const string& result) {
	int score = 0;
	int consecutiveO = 0;

	for (char ch : result) {
		if (ch == 'O') {
			consecutiveO++;
			score += consecutiveO;
		} else {
			consecutiveO = 0;
		}
	}

	return score;
}

int main() {
	int testCases;
	cin >> testCases;
	cin.ignore();

	for (int i = 0; i < testCases; ++i) {
		string result;
		getline(cin, result);
		cout << calculateScore(result) << endl;
	}

	return 0;
}