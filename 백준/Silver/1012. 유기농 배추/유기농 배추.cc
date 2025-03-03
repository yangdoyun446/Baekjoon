#include <bits/stdc++.h>
using namespace std;

int T, M, N, K;
int field[51][51];
int visited[51][51];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void BFS(int x, int y) {
    queue<pair<int, int> > q;
    q.emplace(x, y);
    visited[y][x] = 1;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
            if (field[ny][nx] == 1 && visited[ny][nx] == 0) {
                visited[ny][nx] = 1;
                q.emplace(nx, ny);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> T;
    while (T--) {
        cin >> M >> N >> K;
        memset(field, 0, sizeof(field));
        memset(visited, 0, sizeof(visited));

        while (K--) {
            int x, y;
            cin >> x >> y;
            field[y][x] = 1;
        }

        int cnt = 0;
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (field[y][x] == 1 && visited[y][x] == 0) {
                    BFS(x, y);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}
