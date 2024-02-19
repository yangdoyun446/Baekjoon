#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    vector<int> v;
    int n;
    int a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i] << endl;
    }
}