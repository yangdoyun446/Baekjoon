#include <iostream>
using namespace std;

int Z(int n, int r, int c) {
    if (n == 0) return 0;

    int half = 1 << (n - 1);
    if (r < half && c < half) {
        return Z(n - 1, r, c); // 1
    } else if (r < half && c >= half) {
        return half * half + Z(n - 1, r, c - half); // 2
    } else if (r >= half && c < half) {
        return 2 * half * half + Z(n - 1, r - half, c); // 3
    } else {
        return 3 * half * half + Z(n - 1, r - half, c - half); // 4(사분면)
    }
}

int main() {
    int N, r, c;
    cin >> N >> r >> c;
    cout << Z(N, r, c);
}
