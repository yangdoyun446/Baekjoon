#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int, string> map_1;
    int N, a;
    string b;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        map_1.insert({a, b});
    }
    for (auto i : map_1) {
        cout << i.first << " " << i.second << "\n";
    }
}
