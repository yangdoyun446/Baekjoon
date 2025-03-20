#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x, y;
    cin >> x >> y;
    cout << (int) x / (int) y << ".";
    x %= y;
    for (int i = 0; i <= 1000; i++) {
        x *= 10;
        cout << x / y;
        x = x - (x / y) * y;
    }
}
