#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> notes(8);
	for (int i = 0; i < 8; ++i) {
		cin >> notes[i];
	}

	bool isAscending = true;
	bool isDescending = true;

	for (int i = 0; i < 7; ++i) {
		if (notes[i] < notes[i + 1]) {
			isDescending = false;
		} else if (notes[i] > notes[i + 1]) {
			isAscending = false;
		}
	}

	if (isAscending) {
		cout << "ascending" << endl;
	} else if (isDescending) {
		cout << "descending" << endl;
	} else {
		cout << "mixed" << endl;
	}

	return 0;
}