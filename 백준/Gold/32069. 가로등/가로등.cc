#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long L;
    int N, K;
    cin >> L >> N >> K;

    vector<long long> A(N);
    vector<bool> visited(L + 1, false);
    queue<pair<long long, long long>> q;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        q.emplace(A[i], 0);
        visited[A[i]] = true;
    }

    int count = 0; // 탐
    while (!q.empty()) {
        auto [pos, dist] = q.front();
        q.pop();

        // 출
        if (count >= K) break;

        cout << dist << "\n";
        count++;

        // 왼
        if (pos > 0 && !visited[pos - 1]) {
            q.emplace(pos - 1, dist + 1);
            visited[pos - 1] = true;
        }

        // 오
        if (pos < L && !visited[pos + 1]) {
            q.emplace(pos + 1, dist + 1);
            visited[pos + 1] = true;
        }
    }

    return 0;
}
