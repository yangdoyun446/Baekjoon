#include <bits/stdc++.h>
using namespace std;
long long dp[10000001] = {0};
int main() {
    int n, t;
    cin >> t;
    for (int a = 0; a < t; a++) {
        cin >> n;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;

        for (int i = 3; i <= n; i++) {
            dp[i] = (dp[i - 2] + dp[i - 3]);
        }

        cout << dp[n] << "\n";
    }

}
