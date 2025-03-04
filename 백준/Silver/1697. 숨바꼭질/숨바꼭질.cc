#include <iostream>
#include <queue>
using namespace std;

int n, k;
bool visit[100001];

void bfs(int a) {
    queue<pair<int, int>> q;
    q.push({a, 0});
    
    while (!q.empty()) {
        int x = q.front().first, cnt = q.front().second;
        q.pop();
        
        if (x == k) {
            cout << cnt;
            break;
        }
        
        if (x + 1 < 100001 && !visit[x + 1]) {
            visit[x + 1] = true;
            q.push({x + 1, cnt + 1});
        }
        if (x - 1 >= 0 && !visit[x - 1]) {
            visit[x - 1] = true;
            q.push({x - 1, cnt + 1});
        }
        if (2 * x < 100001 && !visit[2 * x]) {
            visit[2 * x] = true;
            q.push({2 * x, cnt + 1});
        }
    }
}

int main() {
    cin >> n >> k;
    visit[n] = true;
    bfs(n);
}
