#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<ll> v(N);
    for (ll i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < N; i++) {
        cout << v[i] << "\n";
    }
}
