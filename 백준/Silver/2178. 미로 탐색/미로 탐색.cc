#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;
vector<vector<int>> maze, dist;

int dx[] = {-1, 1, 0, 0};  // 상, 하, 좌, 우
int dy[] = {0, 0, -1, 1};

bool inBounds(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < M;
}

int bfs() {
    queue<pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (inBounds(nx, ny) && maze[nx][ny] == 1 && dist[nx][ny] == 0) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    return dist[N - 1][M - 1];
}

int main() {
    cin >> N >> M;

    maze.resize(N, vector<int>(M));
    dist.resize(N, vector<int>(M, 0));

    string line;
    for (int i = 0; i < N; ++i) {
        cin >> line;
        for (int j = 0; j < M; ++j) {
            maze[i][j] = line[j] - '0';
        }
    }

    cout << bfs();

    return 0;
}
