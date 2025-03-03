#include <bits/stdc++.h>
using namespace std;

int zero_count[41], one_count[41];

void precompute() {
    zero_count[0] = 1, one_count[0] = 0;
    zero_count[1] = 0, one_count[1] = 1;

    for (int i = 2; i <= 40; i++) {
        zero_count[i] = zero_count[i - 1] + zero_count[i - 2];
        one_count[i] = one_count[i - 1] + one_count[i - 2];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    precompute();

    int t, a;
    cin >> t;
    while (t--) {
        cin >> a;
        cout << zero_count[a] << " " << one_count[a] << "\n";
    }
}
