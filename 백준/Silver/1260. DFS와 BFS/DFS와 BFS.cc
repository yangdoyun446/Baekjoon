#include <bits/stdc++.h>
using namespace std;

#define MAX 1001

int N, M, V;
vector<int> adj[MAX];
bool visited[MAX];

void reset() {
    fill(visited, visited + MAX, false);
}

void DFS(int v) {
    visited[v] = true;
    cout << v << " ";

    for (int next : adj[v]) {
        if (!visited[next]) {
            DFS(next);
        }
    }
}

void BFS(int v) {
    queue<int> q;
    q.push(v);
    visited[v] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << " ";

        for (int next : adj[cur]) {
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= N; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    reset();
    DFS(V);
    cout << '\n';

    reset();
    BFS(V);

    return 0;
}
