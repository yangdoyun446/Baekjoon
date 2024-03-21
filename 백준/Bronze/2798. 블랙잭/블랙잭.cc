#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int n, m, num, total;
    vector<int> v;
    vector<int> v2;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                total = v[i] + v[j] + v[k];
                if (total > m) {
                    continue;
                } else {
                    v2.push_back(total);
                }
            }
        }
    }
    cout << *max_element(v2.begin(), v2.end());
}