#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;
	double res = (str[0] == 'A' ? 4.0 : str[0] == 'B' ? 3.0 : str[0] == 'C' ? 2.0 : str[0] == 'D' ? 1.0 : 0.0)
	           + (str[1] == '+' ? 0.3 : str[1] == '-' ? -0.3 : 0.0);
	cout << fixed << setprecision(1) << res;
}
