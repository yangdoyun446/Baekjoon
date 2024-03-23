#include <iostream>

using namespace std;

int main(void) {
	int a, b, c, d, e, f, i, j, x, y;
	cin >> a >> b >> c >> d >> e >> f;
	for (i = -999; i <= 999; i++) {
		for (j = -999; j <= 999; j++) {
			if ((a * i) + (b * j) == c && (d * i) + (e * j) == f) {
				x = i;
				y = j;
				break;
			}
		}
	}
	cout << x << " " << y;
}