#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<string, string> map;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        string s, s1;
        cin >> s >> s1;
        map.insert({s, s1});
    }
    for (int i = 1; i <= M; i++) {
        string s;
        cin >> s;
        cout << map[s] << "\n";
    }
}
