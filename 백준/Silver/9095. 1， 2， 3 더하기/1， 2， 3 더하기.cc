#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    int n,a;
    cin >> n;
    for(int j = 4; j <= 11; j++){
            v.push_back(v[j-1] + v[j-2] + v[j-3]);
    }
    for(int i = 0; i < n; i++){
        cin >> a;
        cout << v[a] << endl;
    }
}