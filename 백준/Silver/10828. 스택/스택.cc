#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int cmd, tmp;
    string string_1;
    stack<int> stack_1;
    cin >> cmd;
    for (int i = 0; i < cmd; i++) {
        cin >> string_1;
        if (string_1 == "push") {
            cin >> tmp;
            stack_1.push(tmp);
        } else if (string_1 == "pop") {
            if (!stack_1.empty()) {
                cout << stack_1.top() << "\n";
                stack_1.pop();
            } else {
                cout << -1 << "\n";
            }
        } else if (string_1 == "size") {
            cout << stack_1.size() << "\n";
        } else if (string_1 == "empty") {
            cout << (stack_1.empty() ? 1 : 0) << "\n";
        } else if (string_1 == "top") {
            cout << (stack_1.empty() ? -1 : stack_1.top()) << "\n";
        }
    }
}
