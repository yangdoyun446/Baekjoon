#include <iostream>
#include <vector>

using namespace std;

vector<int> v(1005);

int tile(int n) {
    if (n == 0 || n == 1){
        return 1;
    }
    if (v[n] > 0){
        return v[n];
    }
 
    v[n] = (tile(n - 2) + tile(n - 1));
    v[n] %= 10007;
 
    return v[n];
}

int main() {
    v[0] = 1;
    v[1] = 1;
    v[2] = 2;
    int n;
    cin >> n;
    cout << tile(n);
    return 0;
}
