#include <bits/stdc++.h>
using namespace std;

long long D[1001][1001];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= 1000; i++) D[i][1] = D[1][i] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            D[i][j] = (D[i - 1][j] + D[i][j - 1] + D[i - 1][j - 1]) % 1000000007;
        }
    }
    cout << D[n][m];
}
