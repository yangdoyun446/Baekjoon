#include <bits/stdc++.h>
using namespace std;
int bfs(vector<int> graph[], int startnode) {
    set<int> visited;
    visited.insert(startnode);
    queue<int> q;
    q.push(startnode);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (auto i : graph[cur]) {
            if (visited.find(i) == visited.end()) {
                visited.insert(i);
                q.push(i);
            }
        }
    }
    return visited.size() - 1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int node, edge;
    cin >> node;
    cin >> edge;
    vector<int> Graph[node + 1];
    for (int i = 1; i <= edge; i++) {
        int a, b;
        cin >> a >> b;
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }
    cout << bfs(Graph, 1);
}
