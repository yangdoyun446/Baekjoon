#include <bits/stdc++.h>
using namespace std;

int dp[500][3]; // dp[i][j]: i번째 계단에서 j번 연속 밟았을 때 최대 점수
int lis[500] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    for (int i = 1; i <= N; i++) {
        cin >> lis[i];
    }

    if (N == 1) {
        cout << lis[1];
        return 0;
    }

    dp[1][1] = lis[1];
    dp[2][1] = lis[2];
    dp[2][2] = lis[1] + lis[2];

    for (int i = 3; i <= N; i++) {
        dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + lis[i]; // i-2에서 건너뛴 경우
        dp[i][2] = dp[i - 1][1] + lis[i]; // i-1을 밟고 연속으로 밟음
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]); // i번째 계단을 밟지 않는 경우
    }

    cout << max({dp[N][1], dp[N][2]});
}
