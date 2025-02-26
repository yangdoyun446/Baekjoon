#include <bits/stdc++.h>
using namespace std;

bool isP(char a, char b) {
	return (a == ')' && b == '(') ||
		   (a == ']' && b == '[') ||
		   (a == '}' && b == '{') ||
		   (a == '>' && b == '<');
}

int main(void) {
	int len;
	for (int i = 0; i < 10; i++) {
		int re = 1;
		string a;
		stack<char> s;

		cin >> len;
		cin.ignore();
		getline(cin, a);

		for (char ch : a) {
			if (ch == '(' || ch == '[' || ch == '{' || ch == '<') {
				s.push(ch);
			} else {
				if (s.empty() || !isP(ch, s.top())) {
					re = 0;
					break;
				}
				s.pop();
			}
		}

		if (!s.empty()) re = 0;

		cout << "#" << i + 1 << " " << re << "\n";
	}
}
