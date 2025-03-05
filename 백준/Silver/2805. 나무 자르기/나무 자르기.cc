#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> input;

long long calc(int mid) {
    long long sum = 0;
    for (int i : input)
        if (i > mid) sum += i - mid;
    return sum;
}

int binarySearch() {
    int low = 0, high = input.back();
    while (low <= high) {
        int mid = (low + high) / 2;
        if (calc(mid) >= m) low = mid + 1;
        else high = mid - 1;
    }
    return high;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    input.resize(n);
    for (int &a : input) cin >> a;
    sort(input.begin(), input.end());
    cout << binarySearch();
}