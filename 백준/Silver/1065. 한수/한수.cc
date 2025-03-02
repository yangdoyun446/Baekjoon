#include <bits/stdc++.h>
using namespace std;
bool check(int n) {
    string ns = to_string(n);
    if (ns.size() <= 2) return true;

    int diff = ns[1] - ns[0];
    for (int i = 2; i < ns.size(); i++) {
        if (ns[i] - ns[i - 1] != diff) return false;
    }
    return true;
}
int main() {
    int N, cnt = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (check(i)) cnt++;
    }
    cout << cnt;
}
