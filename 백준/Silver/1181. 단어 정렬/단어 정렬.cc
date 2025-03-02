#include<iostream>
#include<algorithm>
using namespace std;

bool Comp(const string &a, const string &b);

int main() {
    int n;
    cin >> n;
    string words[20001];
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    sort(words, words + n, Comp);
    string before;
    for (int i = 0; i < n; i++) {
        if (before == words[i]) continue;
        cout << words[i] << "\n";
        before = words[i];
    }
    return 0;
}

bool Comp(const string &a, const string &b) {
    if (a.length() != b.length()) {
        return a.length() < b.length();
    } else {
        return a < b;
    }
}