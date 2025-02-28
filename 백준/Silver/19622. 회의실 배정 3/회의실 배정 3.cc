#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N), b(N), c(N), dp(N + 2, 0);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    for (int i = N - 1; i >= 0; i--) {
        dp[i] = max(c[i] + dp[i + 2], dp[i + 1]);
    }
    cout << dp[0] << '\n';
    return 0;
}
