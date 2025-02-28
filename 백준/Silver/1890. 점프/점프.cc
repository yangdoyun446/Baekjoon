#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    int v[100][100];
    long long dp[100][100];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> v[i][j];
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (dp[i][j] == 0 || (i == N - 1 && j == N - 1)) continue;

            int base = v[i][j];
            int d = base + i;
            int r = base + j;

            if (d < N) dp[d][j] = dp[d][j] + dp[i][j];
            if (r < N) dp[i][r] = dp[i][r] + dp[i][j];
        }
    }
    cout << dp[N - 1][N - 1];
    return 0;
}
