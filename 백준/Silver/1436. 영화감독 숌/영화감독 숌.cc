#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, num = 1;
	cin >> n;
	while (n) {
		num++;
		if (to_string(num).find("666") != string::npos) {
			n--;
		}
	}
	cout << num;
}