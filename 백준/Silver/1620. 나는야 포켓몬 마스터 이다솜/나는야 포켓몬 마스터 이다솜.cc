#include <bits/stdc++.h>
using namespace std;
bool isInteger(const std::string &str) {
    if (str.empty()) return false;

    size_t start = (str[0] == '+' || str[0] == '-') ? 1 : 0;

    for (size_t i = start; i < str.size(); i++) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    map<int, string> dogam;
    map<string, int> dogam2;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        dogam.insert({i, s});
        dogam2.insert({s, i});
    }
    for (int i = 0; i < k; i++) {
        string s;
        cin >> s;
        if (isInteger(s)) {
            cout << dogam[stoi(s)] << "\n";
        } else {
            cout << dogam2[s] << "\n";
        }
    }
}