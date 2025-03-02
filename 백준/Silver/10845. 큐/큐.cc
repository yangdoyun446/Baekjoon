#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int cmd, tmp;
    string string_1;
    queue<int> queue_1;
    cin >> cmd;
    for (int i = 0; i < cmd; i++) {
        cin >> string_1;
        if (string_1 == "push") {
            cin >> tmp;
            queue_1.push(tmp);
        } else if (string_1 == "pop") {
            if (!queue_1.empty()) {
                cout << queue_1.front() << "\n";
                queue_1.pop();
            } else {
                cout << -1 << "\n";
            }
        } else if (string_1 == "size") {
            cout << queue_1.size() << "\n";
        } else if (string_1 == "empty") {
            cout << (queue_1.empty() ? 1 : 0) << "\n";
        } else if (string_1 == "front") {
            cout << (queue_1.empty() ? -1 : queue_1.front()) << "\n";
        } else if (string_1 == "back") {
            cout << (queue_1.empty() ? -1 : queue_1.back()) << "\n";
        }
    }
}
