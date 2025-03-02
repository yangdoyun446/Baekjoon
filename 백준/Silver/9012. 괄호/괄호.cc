#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tc;
    cin >> tc;
    string a;
    for (int t = 0; t < tc; t++) {
        stack<char> s;
        cin >> a;
        for (int i = 0; i < a.length(); i++) {
            if (!s.empty()) {
                if (s.top() == '(' && a[i] == ')') {
                    s.pop();
                    continue;
                }
            }
            s.push(a[i]);
        }
        cout << (!s.empty() ? "NO" : "YES") << "\n";
    }
}
