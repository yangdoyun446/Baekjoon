#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, val, BIT = 0;
    string order;
    cin >> m;

    while (m--) {
        cin >> order;
        char cmd = order[0];
        if (cmd == 'a') {
            if (order[1] == 'd') {
                // add
                cin >> val;
                BIT |= (1 << val);
            } else {
                // all
                BIT = (1 << 21) - 1;
            }
        } else if (cmd == 'r') {
            // remove
            cin >> val;
            BIT &= ~(1 << val);
        } else if (cmd == 'c') {
            // check
            cin >> val;
            cout << ((BIT & (1 << val)) ? 1 : 0) << '\n';
        } else if (cmd == 't') {
            // toggle
            cin >> val;
            BIT ^= (1 << val);
        } else {
            // empty
            BIT = 0;
        }
    }
    return 0;
}
