#include <bits/stdc++.h>

using namespace std;

struct Tomato {
    int y, x;
};

queue<Tomato> q;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, graph[1001][1001];

bool isInside(int ny, int nx) {
    return (0 <= nx && 0 <= ny && nx < m && ny < n);
}

void bfs() {
    while (!q.empty()) {
        auto [y, x] = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i], nx = x + dx[i];
            if (isInside(ny, nx) && graph[ny][nx] == 0) {
                graph[ny][nx] = graph[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
            if (graph[i][j] == 1) q.push({i, j});
        }
    }
    
    bfs();
    
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (graph[i][j] == 0) {
                cout << "-1\n";
                return 0;
            }
            result = max(result, graph[i][j]);
        }
    }
    cout << result - 1 << '\n';
}