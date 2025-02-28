#include <bits/stdc++.h>

using namespace std;

long long L;
int N, K;
vector<long long> A;
unordered_map<long long, bool> visited;
queue<pair<long long, long long>> q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> L >> N >> K;

    A.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        q.emplace(A[i], 0);
        visited[A[i]] = true;
    }

    int count = 0;
    while (!q.empty()) {
        pair<long long, long long> t = q.front();
        q.pop();

        long long pos = t.first;
        long long dist = t.second;

        if (count >= K) break;

        // 출
        cout << dist << "\n";
        count++;

        // 왼
        if (pos > 0 && visited.find(pos - 1) == visited.end()) {
            q.emplace(pos - 1, dist + 1);
            visited[pos - 1] = true;
        }

        // 오
        if (pos < L && visited.find(pos + 1) == visited.end()) {
            q.emplace(pos + 1, dist + 1);
            visited[pos + 1] = true;
        }
    }

    return 0;
}
