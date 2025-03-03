#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > arr;
vector<int> ans = {0, 0};

void dac(int i, int j, int n) {
    int color = arr[i][j];
    for (int y = i; y < i + n; ++y) {
        for (int x = j; x < j + n; ++x) {
            if (color != arr[y][x]) {
                int quarter = n / 2;
                dac(i, j, quarter);
                dac(i, j + quarter, quarter);
                dac(i + quarter, j, quarter);
                dac(i + quarter, j + quarter, quarter);
                return;
            }
        }
    }
    ans[color] += 1;
}

int main() {
    int N;
    cin >> N;

    arr.resize(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
        }
    }

    dac(0, 0, N);

    cout << ans[0] << "\n";
    cout << ans[1] << "\n";
}
