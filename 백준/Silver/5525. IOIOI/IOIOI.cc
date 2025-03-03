#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, ans = 0;
    string s;
    cin >> n >> m >> s;
    for (int i = 0; i < m - 2; i++) {
        int k = 0;
        if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
            while (i + 2 < m && s[i + 1] == 'O' && s[i + 2] == 'I') {
                k++;
                if (k == n) {
                    ans++;
                    k--;
                }
                i += 2;
            }
        }
    }
    cout << ans;
    return 0;
}
