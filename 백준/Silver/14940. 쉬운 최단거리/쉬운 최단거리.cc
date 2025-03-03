#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[1001][1001]; // 지도
int dist[1001][1001]; // 거리 배열
int dx[4] = {-1, 1, 0, 0}; // 상하좌우
int dy[4] = {0, 0, -1, 1};

void bfs(int startX, int startY) {
    queue<pair<int, int> > q;
    q.push({startX, startY});
    dist[startX][startY] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[nx][ny] == 1 && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> m;

    int startX = 0, startY = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 2) {
                startX = i;
                startY = j;
            }
            dist[i][j] = -1;
        }
    }

    bfs(startX, startY);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                cout << 0 << " ";
            } else if (dist[i][j] == -1) {
                cout << -1 << " ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
