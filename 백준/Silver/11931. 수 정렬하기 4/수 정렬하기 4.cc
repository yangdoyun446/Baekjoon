#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
    int N;
    cin >> N;
    vector<ll> v(N);
    for (ll i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<ll>());
    for (ll i = 0; i < N; i++) {
        cout << v[i] << "\n";
    }
}
