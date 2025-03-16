#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<pair<int, int> > m;
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        m.insert({b, a});
    }
    for (auto i: m) {
        cout << i.second << " " << i.first << "\n";
    }
}
